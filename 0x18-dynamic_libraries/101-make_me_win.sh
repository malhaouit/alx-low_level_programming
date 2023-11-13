#/bin/bash
wget -P /link https://github.com/malhaouit/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgm.so
LD_PRELOAD=$(pwd)/link/libgm.so ./gm $1 $2 $3 $4 $5 $6
