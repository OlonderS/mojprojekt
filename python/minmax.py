#!/usr/bin/env python
# -*- coding: utf-8 -*-
from random import randint


def minimum(lista):
    min = lista[0]
    for indeks in lista:
        if indeks < min:
            min = indeks
    return min


def maksimum(lista):
    maks = lista[0]
    for i in lista:
        if i > maks:
            maks = i
    return maks


def minmax(lista):
    lmax = []
    lmin = []
    indeks = 0

    for indeks in range(int(len(lista) / 2)):
        if lista[indeks] >= lista[indeks + 1]:
            lmax.append(lista[indeks])
            lmin.append(lista[indeks + 1])
        else:
            lmax.append(lista[indeks + 1])
            lmin.append(lista[indeks])
        indeks += 2
    print("Maksymalna liczba to:", maksimum(lmax))
    print("Minimalna liczba to:", minimum(lmin))

    return 0


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista


def main(args):
    ile = int(input("Podaj ilość liczb: "))
    zakres = int(input("Podaj zakres: "))
    lista = losuj(ile, zakres)
    assert minimum([7, 4, 9, 1, 3, 0]) == 0
    assert maksimum([7, 4, 9, 1, 3, 0]) == 9
    print(lista)
    minmax(lista)
    # print("Minimum: ", minimum(lista))
    # print("Maksimum: ", maksimum(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
