#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0=1
# a1=a
# an=a*a* ... * a (n-czynników) dla N+ - {0,1}

def potega_it(podst, wykladnik):

    """Funkcja oblicza iteracyjnie potęgę 1. naturlanej"""
    wynik = 1
    for i in range(wykladnik):
        wynik = wynik * podst
    return wynik

def main(args):

    # pobierz od użytokownika podstawe i wykładnik i przypisz do odpowienich
    # zmiennych
    podstawa = int(input("Podaj podstawe: "))
    wykladnik = int(input("Podaj wykladnik potegi: "))

    assert type(podstawa) == int
    assert type(wykladnik) == int

    assert potega_it(100, 0) == 1
    assert potega_it(100, 1) == 100
    assert potega_it(2, 3) == 8
    print("Wynik: ", potega_it(podstawa, wykladnik))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))