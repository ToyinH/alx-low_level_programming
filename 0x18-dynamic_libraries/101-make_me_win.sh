#!/bin/bash
gcc -shared -o ../lib_print.so -fPIC custom_print.c
export LD_PRELOAD=../lib_print.so
