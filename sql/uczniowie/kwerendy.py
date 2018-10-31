#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy.py

import sqlite3

def kwerenda1(cur):
    cur.execute("""
        SELECT klasa,  AVG(ocena) AS srednia, przedmiot FROM oceny INNER JOIN przedmioty ON przedmioty.id=oceny.id_przedmiot
        INNER JOIN uczniowie ON uczniowie.id=oceny.id_uczen INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
        WHERE przedmiot='matematyka'
        GROUP BY klasa
        ORDER BY srednia DESC
        """)
    # SELECT * FROM nazwiska WHERE nazwisko LIKE 'G%'
    # SELECT * FROM nazwiska WHERE imie1 LIKE 'A__a'
    # SELECT COUNT(*) FROM nazwiska WHERE imie1 LIKE 'A__a'
    # SELECT * FROM nazwiska INNER JOIN dane_osobowe ON nazwiska.nr_ucznia = dane_osobowe.nr_ucznia # łączenie pól z tabel
    # WHERE miejsce_urodz <> (lub) = 'Gdańsku'
    # ORDER BY egz_mat DESC (lub) ASC
    # LIMIT 10
    # SELECT plec, AVG(egz_mat), AVG(egz_hum), AVG(egz_jez) FROM uczniowie GROUP BY plec
    # SELECT COUNT(id) FROM uczniowie WHERE egz_mat>(SELECT AVG(egz_mat) FROM uczniowie)
    # SELECT klasa, COUNT(uczniowie.id) AS ilosc (przypisanie wartości) FROM uczniowie INNER JOIN klasy ON uczniowie.id_klasa=klasy.id GROUP BY klasa ORDER BY ilosc DESC
    # WITH srednie AS (
    #   SELECT nazwisko, imie, avg(ocena) AS srednia FROM uczniowie INNER JOIN oceny ON uczniowie.id=oceny.id_uczen
    #   GROUP BY uczniowie.id
    #   ) SELECT nazwisko, imie, srednia FROM srednie
    #   WHERE srednia > 3.8
    # SELECT klasa, AVG(ocena) AS srednia FROM oceny INNER JOIN uczniowie ON uczniowie.id=oceny.id_uczen
    #    INNER JOIN klasy ON uczniowie.id_klasa=klasy.id
    #    GROUP BY klasy.id 
    for row in cur.fetchall():
        print(tuple(row))

def main(args):
    # konfiguracja
    baza = 'uczniowie'
    roz = '.txt'
    naglowki = True  #pliki zawierają nagłówki 
    con = sqlite3.connect(baza+'.db') #połączenie
    cur = con.cursor() #obiekt kursora    
    
    kwerenda1(cur)
    
    con.commit()
    con.close()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
