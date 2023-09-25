#!/usr/bin/python3

def magic_calculation(a, b):
    result = 0
    for g in range(1, 3):
        try:
            if g > a:
                raise Exception('Too far')
            else:
                result += a ** b / i
        except:
            result = b + a
            break
    return (result)
