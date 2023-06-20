#!/bin/bash
wget -O /tmp/win.so https://github.com/Polaris-algedi/alx-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
