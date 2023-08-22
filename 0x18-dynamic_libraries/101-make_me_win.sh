#!/bin/bash
gcc -c custom_print.c -fpic
gcc custom_print.o -shared -o lib_print.so
LD_PRELOAD=/$PWD/lib_print.so ./gm 9 8 10 24 75 9
