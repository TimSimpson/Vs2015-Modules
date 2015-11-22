REM CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"
REM mkdir build

REM build LibA.obj
cl /Fobuild\LibA.obj /ILibA\interface LibA\src\LibA.cpp
REM build LibA.dll
link /DLL /OUT:build\LibA.dll build\LibA.obj
REM build exe
cl /Febuild\Test.exe /ILibA\interface  LibA\src\Test.cpp /linkbuild\LibA.lib

build\Test.exe
