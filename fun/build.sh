#!/bin/sh
mkdir -p build
cmake -B build -S .
cmake --build build
