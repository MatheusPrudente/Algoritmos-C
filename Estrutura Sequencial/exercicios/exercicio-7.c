/*
    Faça um programa que calcule e mostre a área de um losango.
*/

#include "stdio.h"

void main () {
    int maior_diagonal;
    int menor_diagonal;
    int area;


    printf(" Digite a maior diagonal do losangulo em centimetros \n" );
    scanf ("%d", &maior_diagonal);


    printf(" Digite a menor diagonal  do losangulo em centimetros \n" );
    scanf ("%d", &menor_diagonal);
    area  = maior_diagonal * menor_diagonal/ 2;

    printf("A area do losangulo eh %d centimetros quadrados",area );
}
