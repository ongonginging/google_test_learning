#!/bin/sh
rm -rf ./a.out
g++ main.cc test.cc base.cc base.h class.h func.h -L/usr/local/lib/gtest -L/usr/lib/x86_64-linux-gnu -lgtest -lpthread -I./ -I/usr/include -I/usr/local/include  -g -O0 -Werror
