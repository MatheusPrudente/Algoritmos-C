/*
    Faça  um  programa  que  leia  o  número  de  termos,  determine  e  mostre
    os  valores  de acordo com a série a seguir: 3, 5, 6, 20, 12, 80, 24, 320, 48,
    1280, 96, 5120, 192, 20480…
*/

#include "stdio.h"

void main() {
    int i = 0 ;
    int numero1 = 3;
    int numero2 = 5;
    int numero3 = 6;
    int numero4 = 20;

    while(i < 5) {
        printf ("\n%d,",numero1);
        printf ("%d,",numero2);
        printf ("%d,",numero3);
        printf ("%d,\n ",numero4);
        numero1 = numero1*4;
        numero2 = numero2*16;
        numero3 = numero3*4;
        numero4 = numero4*16;
        i++;
    }
}
