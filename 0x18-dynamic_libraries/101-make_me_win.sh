#!/bin/bash
wget -P /tmp https://github.com/AhmedHamed3699/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libpot.so
export LD_PRELOAD=/tmp/libwin.so
