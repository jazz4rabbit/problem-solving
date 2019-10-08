#!/bin/bash

clear
make clean -f ../Makefile
make -f ../Makefile || exit 1
echo --------------------------------------------------------------------------------
./a.out < inputs.txt
