/*
    Faça um programa que calcule e mostre a área de um trapézio.
*/
#include "stdio.h"

void main () {
    int maior_base;
    int menor_base;
    int altura;
    int area;


    printf(" Digite a maior base do trapezio em centimetros \n" );
    scanf ("%d", &maior_base);
    printf(" Digite a menor base  do trapezio em centimetros \n" );
    scanf ("%d", &menor_base);
    printf(" Digite a altura do trapezio  em centimetros \n" );
    scanf ("%d", &altura);


    area  = (maior_base + menor_base)*altura / 2;
    printf("A area do trapezio eh %d centimetros quadrados",area );
}
