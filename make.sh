#!/bin/sh
rm -rf ./a.out
g++ main.cc test.cc base.cc base.h class.h func.h -L/usr/local/lib64/gtest -lgtest -I./ -I/usr/local/include -g -O0 -Werror
