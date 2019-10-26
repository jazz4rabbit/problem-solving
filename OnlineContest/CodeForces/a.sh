#!/bin/bash

clear
make name=$1 clean -f ../Makefile
make name=$1 -f ../Makefile || exit 1
echo --------------------------------------------------------------------------------
./$1.out < $1.txt
