/*
    Faça um programa que converta metros para centímetros.
*/
#include "stdio.h"

int main () {
    int metro;
    int centimetro;

    printf(" Digite o valor em metros para ser convertido em centimetros: \n" );
    scanf ("%d", &metro );
    centimetro = metro*100;

    printf(" A conversão eh de  %d centimetros",centimetro  );
}
