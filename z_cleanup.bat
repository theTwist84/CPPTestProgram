

rmdir build /s /q
mkdir build
pushd build
IF EXIST "C:\Program Files (x86)\CMake\bin\" (
  "C:\Program Files (x86)\CMake\bin\cmake" -G "Visual Studio 14" --build ..
) ELSE (
  IF EXIST "C:\Program Files\CMake\bin\" (
    "C:\Program Files\CMake\bin\cmake" -G "Visual Studio 14" --build ..
  ) ELSE (
    cmake -G "Visual Studio 14" --build ..
  )
)
popd

if [%1] equ [z_all] call %1 %f0