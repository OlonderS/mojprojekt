#!/usr/bin/env python
# -*- coding: utf-8 -*-
# a0=1
# a1=a
# an=a*a* ... * a (n-czynników) dla N+ - {0,1}

def potega_it(podst, wykladnik):
    """Funkcja oblicza iteracyjnie potęgę 1. naturlanej"""
    wynik = 1
    i = 1
    for i in range(wykladnik):
      
        wynik = wynik*podstawa
        return wynik
def main(args):
    #pobierz od użytokownika podstawe i wykładnik i przypisz do odpowienich
    #zmiennych
    podstawa = int(input("Podaj podstawe: "))
    wykladnik = int(input("Podaj wykladnik potegi: "))
    
    potega_it(podstawa, wykladnik)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
