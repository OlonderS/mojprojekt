#!/usr/bin/env python
# -*- coding: utf-8 -*-


#~ def fib_iter2(n):
    #~ """
    #~ Funkcja wyświetla kolejne wyrazy ciągu Fibonacciego
    #~ Funkcja zwraca n-ty wyraz ciągu.
    #~ F(0) = 0
    #~ F(1) = 1
    #~ F(n) = F(n-2) + F(n-1) dla n > 1
    #~ """
    #~ a, b = (0, 1)
    #~ print("Wyraz", 1, "wynosi:", a)
    #~ print("Wyraz", 2, "wynosi:", b)
    #~ for i in range(1, n - 1):
        #~ # wynik = a + b
        #~ a, b = b, a + b
        #~ print("Wyraz", i+1, "wynosi:", b)

    #~ return b
    
    
    
    
    
    
def fib_iter(n):
    """
    Funkcja wyświetla kolejne wyrazy ciągu Fibonacciego
    Funkcja zwraca n-ty wyraz ciągu.
    F(0) = 0
    F(1) = 1
    F(n) = F(n-2) + F(n-1) dla n > 1
    """
    a, b = (0, 1)
    if n > 1:
        print("Wyraz", 1, "wynosi:", a)
        print("Wyraz", 2, "wynosi:", b)
        for i in range(1, n-1):
            a, b = b, a + b
            print("Wyraz", i + 1, "wynosi:", b)
    elif n == 1:
        print("Wyraz", 1, "wynosi:", b)
    elif n == 0:
        print("Wyraz", 0, "wynosi:", a)




def main(args):
    liczba = int(input("Podaj ilość wyrazów ciągu: "))
    fib_iter(liczba)

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
