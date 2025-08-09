#!/bin/bash
set -e

mkdir -p build/linux
cd build

cmake -B linux -G Ninja -S .. -DCMAKE_SYSTEM_NAME=Linux

cmake --build linux --config Release
