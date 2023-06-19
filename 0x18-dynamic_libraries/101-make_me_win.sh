#!/bin/bash
wget -O /tmp/wik.so https://github.com/MetaFSI/alx-low_level_programming/0x18-dynamic_libraries/wik.so
export LD_PRELOAD=/tmp/wik.so
