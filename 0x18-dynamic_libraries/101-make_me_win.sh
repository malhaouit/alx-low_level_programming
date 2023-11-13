#!/bin/bash
wget -P /link https://raw.githubusercontent.com/malhaouit/alx-low_level_programming/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD=$(pwd)/link/libgm.so
