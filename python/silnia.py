#!/usr/bin/env python
# -*- coding: utf-8 -*-
# !n = 1 dla {0, 1}
# !n = 1*2*...*n dla N+ - {0,1}
# !n = (n-1)! * n
# 4! = 3! * 4


def silnia_rek(liczba):
    if liczba < 2:
        return 1
    return silnia_rek(liczba - 1) * liczba


def silnia_it(liczba):
    """Funkcja oblicza iteracyjnie silnię liczby naturlanej"""
    wynik = 1
    for i in range(2, liczba + 1):
        wynik = wynik * i
    return wynik


def main(args):

    # pobierz od użytokownika podstawe i wykładnik i przypisz do odpowienich
    # zmiennych
    a = int(input("Podaj liczbę: "))

    assert type(a) == int
    assert silnia_it(0) == 1
    assert silnia_it(1) == 1
    assert silnia_it(2) == 2
    assert silnia_it(6) == 720
    assert silnia_rek(7) == 5040
    print("Silnia", a, "wynosi: ", silnia_it(a))
    print("Silnia", a, "wynosi: ", silnia_rek(a))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
