#include <sltk2/win32.h>

HBITMAP CreateWindowBitmap(HWND hWnd)
{
    HBITMAP hbmNew;
    HDC hDC, hMemDC;
    HGDIOBJ hbmOld;
    RECT rc;
    SIZE siz;
    DWORD dwError = 0;
 
    GetWindowRect(hWnd, &rc);
    siz.cx = rc.right - rc.left;
    siz.cy = rc.bottom - rc.top;
 
    hbmNew = NULL;
    hDC = GetWindowDC(hWnd);
    if (hDC != NULL)
    {
        hMemDC = CreateCompatibleDC(hDC);
        if (hMemDC != NULL)
        {
            hbmNew = CreateCompatibleBitmap(hDC, siz.cx, siz.cy);
 
            if (hbmNew != NULL)
            {
                hbmOld = SelectObject(hMemDC, hbmNew);
                BitBlt(hMemDC, 0, 0, siz.cx, siz.cy,
                       hDC, 0, 0, SRCCOPY);
                SelectObject(hMemDC, hbmOld);
            }
            else
                dwError = GetLastError();
            DeleteDC(hMemDC);
        }
        else
            dwError = GetLastError();
        ReleaseDC(hWnd, hDC);
        SetLastError(dwError);
    }
 
    return hbmNew;
}
 
typedef struct tagBITMAPINFOEX
{
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD          bmiColors[256];
} BITMAPINFOEX, FAR * LPBITMAPINFOEX;
 
BOOL SaveBitmapToFile(LPCTSTR pszFileName, HBITMAP hbm)
{
    BOOL f;
    BITMAPFILEHEADER bf;
    BITMAPINFOEX bi;
    BITMAPINFOHEADER *pbmih;
    DWORD cb;
    DWORD cColors, cbColors;
    HDC hDC;
    HANDLE hFile;
    LPVOID pBits;
    BITMAP bm;
    DWORD dwError = 0;
 
    if (!GetObject(hbm, sizeof(BITMAP), &bm))
        return FALSE;
 
    pbmih = &bi.bmiHeader;
    ZeroMemory(pbmih, sizeof(BITMAPINFOHEADER));
    pbmih->biSize             = sizeof(BITMAPINFOHEADER);
    pbmih->biWidth            = bm.bmWidth;
    pbmih->biHeight           = bm.bmHeight;
    pbmih->biPlanes           = 1;
    pbmih->biBitCount         = bm.bmBitsPixel;
    pbmih->biCompression      = BI_RGB;
    pbmih->biSizeImage        = bm.bmWidthBytes * bm.bmHeight;
 
    if (bm.bmBitsPixel < 16)
        cColors = 1 << bm.bmBitsPixel;
    else
        cColors = 0;
    cbColors = cColors * sizeof(RGBQUAD);
 
    bf.bfType = 0x4d42;
    bf.bfReserved1 = 0;
    bf.bfReserved2 = 0;
    cb = sizeof(BITMAPFILEHEADER) + pbmih->biSize + cbColors;
    bf.bfOffBits = cb;
    bf.bfSize = cb + pbmih->biSizeImage;
 
    pBits = HeapAlloc(GetProcessHeap(), 0, pbmih->biSizeImage);
    if (pBits == NULL)
        return FALSE;
 
    f = FALSE;
    hDC = GetDC(NULL);
    if (hDC != NULL)
    {
        if (GetDIBits(hDC, hbm, 0, bm.bmHeight, pBits, (BITMAPINFO*)&bi,
            DIB_RGB_COLORS))
        {
            hFile = CreateFile(pszFileName, GENERIC_WRITE, FILE_SHARE_READ, NULL,
                               CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL |
                               FILE_FLAG_WRITE_THROUGH, NULL);
            if (hFile != INVALID_HANDLE_VALUE)
            {
                f = WriteFile(hFile, &bf, sizeof(BITMAPFILEHEADER), &cb, NULL) &&
                    WriteFile(hFile, &bi, sizeof(BITMAPINFOHEADER), &cb, NULL) &&
                    WriteFile(hFile, bi.bmiColors, cbColors, &cb, NULL) &&
                    WriteFile(hFile, pBits, pbmih->biSizeImage, &cb, NULL);
                if (!f)
                    dwError = GetLastError();
                CloseHandle(hFile);
 
                if (!f)
                    DeleteFile(pszFileName);
            }
            else
                dwError = GetLastError();
        }
        else
            dwError = GetLastError();
        ReleaseDC(NULL, hDC);
    }
    else
        dwError = GetLastError();
 
    HeapFree(GetProcessHeap(), 0, pBits);
    SetLastError(dwError);
    return f;
}
 
int main(void)
{
    HBITMAP hbm = CreateWindowBitmap(GetDesktopWindow());
    SaveBitmapToFile(L"desktop.bmp", hbm);
    return 0;
}
