#!/bin/bash
gcc -c *.c
ar -rc liballa.a *.o
ranlib liballa.a
