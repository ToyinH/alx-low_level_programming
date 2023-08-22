#!/bin/bash
gcc -shared -o lib_print.so -fPIC custom_print.c
LD_PRELOAD=/$PWD/lib_print.so /$PWD/gm
