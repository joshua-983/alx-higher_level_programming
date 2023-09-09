#!/usr/bin/python3
# 3-print_reversed_list_integer.py

def print_reversed_list_integer(my_list=[]):
    if isinstance(my_list, list):'''print integer in reverse order'''
        my_list.reverse()
        for i in my_list:
            print("{:d}".format(i))

