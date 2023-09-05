#!/usr/bin/python3
# 100-print_tebahpla.py

b = 0
for c in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(c - b)), end="")
    b = 32 if b == 0 else 0
