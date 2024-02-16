#!/bin/bash
wget -P /tmp https://github.com/Tonyrealzy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libfile.so
export LD_PRELOAD=/tmp/libfile.so