REM CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"
md mod_build

REM mod_build LibA.obj
cl -c /module /module:interface /DUSE_MODULES  /ILibA\interface LibA\src\LibA.cpp
REM mod_build LibA.dll
REM link /DLL /OUT:mod_build\LibA.dll mod_build\LibA.obj
REM mod_build exe
REM cl -c /module /DUSE_MODULES /Femod_build\Test.exe /ILibA\interface  LibA\src\Test.cpp /linkmod_build\LibA.lib /module:search mod_build

REM mod_build\Test.exe
