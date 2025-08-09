#!/bin/bash
set -e

mkdir -p build/windows
cd build

cmake -B windows -G Ninja -S .. \
  -DCMAKE_SYSTEM_NAME=Windows \
  -DCMAKE_C_COMPILER=x86_64-w64-mingw32-gcc \
  -DCMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++ \
  -DCMAKE_SYSROOT=/usr/x86_64-w64-mingw32 \
  -DCMAKE_FIND_ROOT_PATH=/usr/x86_64-w64-mingw32

cmake --build windows --config Release

./windows/voe.exe
