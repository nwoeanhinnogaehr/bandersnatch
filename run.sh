#!/bin/bash
z80asm decompressed.asm -o decompressed.tap
gcc -w calc_checksum.c -o calc_checksum
./calc_checksum 23 65536 < decompressed.tap >> decompressed.tap
fuse decompressed.tap
