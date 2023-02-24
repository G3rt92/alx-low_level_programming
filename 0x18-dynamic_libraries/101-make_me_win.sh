#!/bin/bash
wget https://github.com/G3rt92/alx-low_level_programming/tree/master/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=../inject.so
