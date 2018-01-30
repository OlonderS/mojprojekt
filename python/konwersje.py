#!/usr/bin/env python
# -*- coding: utf-8 -*-


def dec2other(liczba10, podstawa):
    """Konwersjacja liczby dziesiętnej na system o podanej podstawie"""
    liczba = []  # pusta lista
    while liczba10 != 0:
        reszta = liczba10 % podstawa
        if reszta > 9:
            reszta = chr(reszta + 55)  # zmiana liczby na litere w kodzie ASCII
        liczba.append(str(reszta))
        liczba10 = int(liczba10 / podstawa)  # dzielenie z przecinkiem
    liczba.reverse()  # odwrócenie kolejności elementów
    return "".join(liczba)


def zamiana1():
    """Pobranie danych wejściowych"""
    liczba = int(input("Podaj liczbę: "))
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    print ("wynik konwersji: {}(10) = {}({})".format(
        liczba, dec2other(liczba, podstawa), podstawa))
    # {} - placefolder - miejsce na wynik - liczbę

def other2dec(liczba, podstawa):
    """Zamiana podanej liczby na system dziesiętny"""
    liczba10 = 0
    potega = len(liczba) - 1
    for cyfra in liczba:
        liczba10 += int(cyfra) * (podstawa ** potega)  # ** -potęga
        potega -=1

    return liczba10


def zamiana2():
    """Pobranie danych wejściowych"""
    liczba = input("Podaj liczbę: ")  # bez inta gdy mozna podać litery
    podstawa = 0
    while podstawa < 2 or podstawa > 16:
        podstawa = int(input("Podaj podstawę: "))
    #  pass
    print ("wynik konwersji: {}({}) = {}(10)".format(
        liczba, other2dec(liczba, podstawa), podstawa))
    # {} - placefolder - miejsce na wynik - liczbę


def main(args):
    print("Zamiana liczby dziesiętnej na liczbę o podanej podstawie"
          "<2;16> lub odwrotnie.")
    zamiana1()
    zamiana2
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
