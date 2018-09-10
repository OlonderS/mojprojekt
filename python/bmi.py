#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):



    wzrost = float(input("Podaj twój wzrost (w metrach): "))
    masa = int(input("Podaj swóją masę (w kg): "))
    bmi = masa / (wzrost * wzrost)
    if bmi < 18.5:
        print('Masz mały problem')
    elif bmi < 25:
        print('Spoko')
    elif bmi < 30:
        print('Masz większy problem')
    elif bmi > 30:
        print('Jesteś za gruby')

#        wzrost = float(input("Podaj twój wzrost (w metrach): "))
#        masa = int(input("Podaj swóją masę (w kg): "))
#        bmi = masa / (wzrost * wzrost)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
