#!/bin/bash
wget -P /link https://raw.githubusercontent.com/malhaouit/alx-low_level_programming/master/0x18-dynamic_libraries/libgm.so
LD_PRELOAD=$(pwd)/libgm.so ./gm "$1" "$2" "$3" "$4" "$5" "$6"
