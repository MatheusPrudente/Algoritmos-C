/*
    Faça  um  programa  que  leia  o  número  de  termos,  determine  e  mostre  os  valores
    de acordo com a série a seguir: 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768 …
*/

#include "stdio.h"

void main() {
    int i = 0 ;
    int numero1 = 2;
    int numero2 = 7;
    int numero3 = 3;

    while(i < 10) {
        printf ("\n%d,",numero1);
        printf ("%d,",numero2);
        printf ("%d,\n ",numero3);
        numero1 = numero1*2;
        numero2 = numero2*3;
        numero3 = numero3*4;
        i++;
    }
}

