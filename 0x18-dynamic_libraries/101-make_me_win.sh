#!/bin/bash
wget -O /tmp/last.so https://github.com/MetaFSI/alx-low_level_programming/master/0x18-dynamic_libraries/last.so
export LD_PRELOAD=/tmp/last.so
