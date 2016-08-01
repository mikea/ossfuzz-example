#!/bin/bash -ex
. /env

mkdir /work/ossfuzz-example
cd /work/ossfuzz-example

cmake -G "Ninja" \
  -DCMAKE_C_COMPILER=$CC -DCMAKE_CXX_COMPILER=$CXX \
  -DCMAKE_C_FLAGS="$CFLAGS" -DCMAKE_CXX_FLAGS="$CXXFLAGS" \
  /src/ossfuzz-example
ninja

$CXX $CXXFLAGS $LDFLAGS /src/ossfuzz-example/fuzz/fuzzer.cc -o /out/ossfuzzexample_fuzzer \
  /work/libfuzzer/*.o ./libexample.a
