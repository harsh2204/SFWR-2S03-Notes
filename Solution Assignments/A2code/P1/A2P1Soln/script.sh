#!/bin/bash
echo "running tests"
./replace printf ";\/\/printf" linsolve.c
make
make
if [ $? -ne 0 ]; then
    echo "makefile failed. moving on to next stage"
fi
cp makefile makefile.temp
cp makefile.old makefile
make clean
make
# GTimeout was set to 30 minutes to terminate excessively long code.
time ./linsolve 
make clean
mv -f makefile.temp makefile
echo "exit success"
