#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwerendy_orm.py
import os
from uczniowie_model import *


def main(args):
    baza.connect() 

    kwerendy = [
        "Uczen.select()",
        "Uczen.select().where(Uczen.imie=='RafaĹ')",
        "Uczen.select().where(Uczen.imie.startswith('G'))",
        "Uczen.select().where(Uczen.egz_mat.between(20, 40))",
        "Uczen.select().where((Uczen.nazwisko=='Piasecki') & (Uczen.imie=='RafaĹ'))",
        "Uczen.select().order_by(Uczen.egz_mat.asc())",
        "Uczen.select().where(Uczen.plec==1).order_by(Uczen.egz_mat.asc())",
    ]
    
    for obj in eval(kwerendy[6]):
        print(obj.nazwisko, obj.imie, obj.egz_mat)
    
    baza.commit()
    baza.close()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))


## source ~/pve3/bin/peewee
## python plik
## sqlite3 baza
## .schema
