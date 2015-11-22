REM CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat"
md mod_build

REM mod_build LibA.obj
cl -c /module /module:interface /DUSE_MODULES /Fomod_build\LibA.obj /ILibA\interface LibA\src\LibA.cpp /module:export
REM TODO: Figure out how to make ifc file appear in correct place.
move LibA.ifc mod_build\LibA.ifc

REM mod_build LibA.dll
REM link /DLL /OUT:mod_build\LibA.dll mod_build\LibA.obj
REM mod_build exe
cl /module /DUSE_MODULES /Femod_build\Test.exe LibA\src\Test.cpp  /module:reference mod_build\LibA.ifc /linkmod_build\LibA.obj

mod_build\Test.exe
