#!/bin/bash
wget -P /tmp https://github.com/Kirubiel-B/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
