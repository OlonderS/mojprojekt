#!/usr/bin/env python
# -*- coding: utf-8 -*-


def dodawanie(a, b):
    return a + b


def odejmowanie(a, b):
    return a - b


def mnozenie(a, b):
    return a * b


def dzielenie(a, b):
    return a / b


def main(args):
    a = int(input("Podaj 1. liczbe: "))
    print(a)
    b = int(input("Podaj 2. liczbe: "))
    print(b)

    print("Suma: ", dodawanie(a,b))
    print("Różnica: ", odejmowanie(a,b))
    print("Mnożenie: ", mnozenie(a,b))
    print("Dzielenie: ", dzielenie(a,b))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
