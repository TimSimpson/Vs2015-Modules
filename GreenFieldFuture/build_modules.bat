REM
md mod_build

cl -c /module /module:interface /DUSE_MODULES /Fomod_build\LibA.obj /Iinterface src\LibA.cxx /module:export
REM TODO: Figure out how to make ifc file appear in correct place.
move LibA.ifc mod_build\LibA.ifc

REM mod_build LibA.dll
REM link /DLL /OUT:mod_build\LibA.dll mod_build\LibA.obj
REM mod_build exe
cl /module /DUSE_MODULES /Femod_build\Test.exe src\Test.cpp  /module:reference mod_build\LibA.ifc /linkmod_build\LibA.obj

mod_build\Test.exe
