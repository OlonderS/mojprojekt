#!/usr/bin/env python
# -*- coding: utf-8 -*-


def sort_wstaw_min(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1  # indeks
        while k >= 0 and lista[k] > el:  # zmienić znak - zmiana kolejności
            # wyszukiwanie pozycji do wstawienia, przesuwanie się elementów
            lista[k + 1] = lista[k]  # przesuwanie w góre tabeli
            k -= 1
        lista[k + 1] = el
    return lista  # wstawianie elementu


def sort_wstaw_max(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1  # indeks
        while k >= 0 and lista[k] < el:  # zmienić znak - zmiana kolejności
            # wyszukiwanie pozycji do wstawienia, przesuwanie się elementów
            lista[k + 1] = lista[k]  # przesuwanie w góre tabeli
            k -= 1
        lista[k + 1] = el
    return lista  # wstawianie elementu


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9]
    assert sort_wstaw_min([5, 3, 2, 4, 1, 0]) == [0, 1, 2, 3, 4, 5]
    assert sort_wstaw_max([5, 3, 2, 4, 1, 0]) == [5, 4, 3, 2, 1, 0]
    print("Lista przed sortowaniem", lista)
    print("Lista po posortowaniu (rosnąco)", sort_wstaw_min(lista))
    print("Lista po posortowaniu (malejąco)", sort_wstaw_max(lista))
    #  1 [3, 4, 7, 0, 2, 3, 1, 9]
    #  2 [3, 4, 7, 0, 2, 3, 1, 9]
    #  3 [0, 3, 4, 7, 2, 3, 1, 9] itd
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
