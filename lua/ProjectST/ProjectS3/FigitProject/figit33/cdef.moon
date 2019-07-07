ffi = require "ffi"
ffi.cdef[[
/* 整数型定義 */
typedef char			s8;
typedef unsigned char	u8;
typedef short			s16;
typedef unsigned short	u16;
typedef long			s32;
typedef unsigned long	u32;


/* UTF-8ライブラリ */
u32 ii_utf8_byte(u8 c);
u8 ii_utf8_judge(const char *str);
const char *ii_utf8_encode(const char *str);
const char *ii_UTF8toSJIS(const char *str);
u32 ii_utf8_seeksize(const char *ptr, s32 mov);
u32 ii_utf8_len(const char *str);
const char *ii_utf8_sub(const char *str, u32 i, u32 size);
const char *ii_utf8_replace(const char *target, u32 i, u32 size, const char *newstr);
void ii_utf8_print(const char *str);
void ii_utf8_echo(const char *str);


/* 文字列拡張ライブラリ */
u32 ii_strlen(const char *str);
const char *ii_substr(const char *str, u32 i, u32 size);
const char *ii_str_replace(const char *str, u32 i, u32 size, const char *newstr);
bool ii_strcmp(const char *s1, const char *s2);
bool ii_strncmp(const char *s1, const char *s2, u32 size);
u32 ii_str_found(const char *dest, const char *target);
const char *ii_str_token(const char *target, const char *splits, const char *delims);
const char *ii_str_exchange(const char *source, const char *targetStr, const char *newStr, const char *esc);


/* 時間・乱数・環境変数など */
typedef struct{
	u32 sec, min, hour, day, month, year, week;
}ii_DateTime;

bool ii_getDate(ii_DateTime *dest, u32 timer);
bool ii_isLeapYear(u32 year);
void ii_sleep(u32 msec);

void ii_srand(u32 arg1, u32 *arg2);
s32 ii_rand(s32 arg1, s32 arg2);

bool ii_setEnv(const char *exp);
const char *ii_getEnv(const char *env);


/* バイナリライブラリ */
void *ii_new_Binary();
void ii_delete_Binary(void *handle);
void ii_Binary_alloc(void *handle, u32 size);
void ii_Binary_resize(void *handle, u32 size);
void ii_Binary_release(void *handle);
void ii_Binary_reserve(void *handle, u32 size);
char ii_Binary_at(void *handle, u32 i);
void ii_Binary_setAt(void *handle, u32 i, char c);
void *ii_Binary_ptr(void *handle);
void *ii_Binary_cur(void *handle);
u32 ii_Binary_size(void *handle);
const u32 &ii_Binary_tell(void *handle);
void ii_Binary_push(void *handle, const void *data, u32 size);
void ii_Binary_pushVal(void *handle, u32 data, u8 size);
void ii_Binary_pushNum(void *handle, double data, u8 precision);
void ii_Binary_pushStr(void *handle, const char *data, u32 size);
void ii_Binary_pushStrData(void *handle, const char *data);
s32 ii_Binary_getS32(void *handle);
u32 ii_Binary_getU32(void *handle);
s16 ii_Binary_getS16(void *handle);
u16 ii_Binary_getU16(void *handle);
s8 ii_Binary_getS8(void *handle);
u8 ii_Binary_getU8(void *handle);
double ii_Binary_getNum(void *handle);
const char *ii_Binary_getStr(void *handle, u32 size);
const char *ii_Binary_getStrData(void *handle);
const void *ii_Binary_get(void *handle, u32 size);
void ii_Binary_seek(void *handle, s32 mov, u8 mode);
void ii_Binary_encode(void *handle, const char *key, u32 keysize);
bool ii_Binary_decode(void *handle, const char *key, u32 keysize);
bool ii_Binary_eof(void *handle);

u32 ii_getCRC32(const void *buffer, u32 bufferlen, u32 crc32_start);


/* ファイルパス関連ライブラリ */
const char *ii_getUniquePath();
void *ii_new_Path(const char *path);
void ii_delete_Path(void *obj);
void ii_Path_open(void *obj, const char *path);
void *ii_Path_name(void *obj);
void *ii_Path_stem(void *obj);
void *ii_Path_ext(void *obj);
bool ii_Path_isFile(void *obj);
bool ii_Path_isDir(void *obj);
void *ii_Path_complete(void *obj);
void *ii_Path_parent(void *obj);
const char *ii_Path_str(void *obj);

void *ii_new_PathArray(u32 size, ...);
void ii_delete_PathArray(void *obj);
void ii_PathArray_set(void *obj, u32 size, ...);
void ii_PathArray_reserve(void *obj, u32 size);
void ii_PathArray_resize(void *obj, u32 size);
void ii_PathArray_clear(void *obj);
void ii_PathArray_push(void *obj, const char *str);
u32 ii_PathArray_size(void *obj);
void *ii_PathArray_at(void *obj, u32 index);
void ii_PathArray_setAt(void *obj, u32 index, const char *str);


/* ファイル操作ライブラリ */
void *ii_new_File();
void ii_delete_File(void *obj);
bool ii_File_open(void *obj, const void *path, const char *mode);
void ii_File_close(void *obj);
u32 ii_File_size(void *obj);
const char *ii_File_gets(void *obj);
char ii_File_getc(void *obj);
bool ii_File_puts(void *obj, const char *text);
bool ii_File_putc(void *obj, char c);
u32 ii_File_read(void *obj, void *dest, u32 size, u32 n);
u32 ii_File_write(void *obj, const void *buf, u32 size, u32 n);
const char *ii_File_load(void *obj, u32 size);
bool ii_File_seek(void *obj, s32 move, u8 from);
u32 ii_File_tell(void *obj);
bool ii_File_eof(void *obj);
bool ii_File_flush(void *obj);

const char *ii_loadFile(const void *filename);
u32 ii_readFile(void *dest, const void *filename);
bool ii_putsFile(const void *filename, const char *str, bool add);
u32 ii_writeFile(const void *filename, const void *buf, u32 size, u32 n, bool add);
bool ii_copyFile(const void *src, const void *dest);
bool ii_removeFile(const void *file);
bool ii_moveFile(const void *src, const void *dest);
bool ii_renameFile(const void *src, const void *dest);
unsigned long long ii_getFileSize(const void *file);
void ii_resizeFile(const void *file, u32 size);
bool ii_enumFiles(void *dest, const void *dir, u32 depth, u8 opt);


/* ディレクトリ操作ライブラリ */
bool ii_createDir(const void *dir);
bool ii_copyDir(const void *src, const void *dest, u32 depth);
bool ii_removeDir(const void *dir);
bool ii_moveDir(const void *src, const void *dest);
void *ii_getCurrentDir();
void ii_setCurrentDir(const void *dir);
void *ii_getModulePath();
void *ii_getModuleDir();

void *ii_new_FileEnumerator();
void ii_delete_FileEnumerator(void *obj);
bool ii_FileEnumerator_open(void *obj, const void *dir);
void ii_FileEnumerator_close(void *obj);
void *ii_FileEnumerator_get(void *obj);
]]

--[[ 行こうか ]]
path = ffi.gc ffi.C.ii_new_Path"test.cpp", ffi.C.ii_delete_Path
ffi.C.ii_utf8_print ffi.C.ii_loadFile path
os.execute"pause"