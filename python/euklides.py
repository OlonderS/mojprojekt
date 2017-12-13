#!/usr/bin/env python
# -*- coding: utf-8 -*-


def nwd(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a


def NWDoptymalne(a, b):
    while a > 0:
        a = a % b
        b = b - a
    return b


def NWD_opt_rek(a, b):
    if b == 0:
        return a
    return NWD_opt_rek(b, a % b)

def main(args):
    a = int(input("Podaj pierwsza liczbe: "))
    b = int(input("Podaj druga liczbe: "))
    # print("Największy wspólny dzielnik liczb",
    # a, "i", b, "wynosi:", nwd(a, b))
    print("Nwd({:d}, {:d}) = {:d}".format(a, b, NWD_opt_rek(a, b)))
    assert NWDoptymalne(1989, 867) == 51
    assert NWDoptymalne(2, 1) == 1

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
