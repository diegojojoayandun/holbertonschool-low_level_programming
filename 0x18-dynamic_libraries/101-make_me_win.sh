#!/bin/bash
wget -P /tmp https://github.com/diegojojoayandun/holbertonschool-low_level_programming/blob/4ebd2916e7a822d59e091714380454dd227f8c5d/0x18-dynamic_libraries/hacklib.so
export LD_PRELOAD=/tmp/hacklib.so
