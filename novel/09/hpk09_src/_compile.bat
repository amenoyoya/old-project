:: �p�X�ݒ�
@call c:\myapps\vc2010\vcvars.bat

:: ----- �R���p�C�� -----
@%~d0
@cd "%~dp0"

:: �x�����x��4�A�ő���̍œK���ŃR���p�C��
@cl.exe /c /nologo /W3 /WX- /Ox /Oi /Oy- /GL /D _CRT_SECURE_NO_WARNINGS /D WIN32 /D NDEBUG /D _MBCS /Gm- /EHsc /MT /GS /Gy /fp:precise /Zc:wchar_t /Zc:forScope /Gd /analyze- /errorReport:none *.cpp
@pause

@link.exe /ERRORREPORT:NONE /OUT:main.exe /NOLOGO /OPT:REF /OPT:ICF /LTCG /DYNAMICBASE:NO /NXCOMPAT /MACHINE:X86 *.obj

@del *.obj
