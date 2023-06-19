#!/bin/bash
wget -P .. https://raw.githubusercontent.com/MetaFSI/alx-low_level_programming/master/0x18-dynamic_libraries/last.so
export LD_PRELOAD="$PWD/../last.so"
