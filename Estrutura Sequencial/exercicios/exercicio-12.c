/*
    Faça um  programa que  receba  o  peso  de  uma  pessoa,  calcule  e  mostre:
        a)  o  novo peso  se  a  pessoa  engordar  15%  sobre  o  peso  digitado;
        b)  o  novo  peso  se a  pessoa emagrecer 20% sobre o peso
*/

#include "stdio.h"

void main () {
    float peso;
    float maior_peso;
    float menor_peso;

    printf(" Digite o peso da pessoa em kilos\n" );
    scanf ("%f", &peso);
    maior_peso = peso + (peso*15/100);
    menor_peso = peso - (peso*20/100);

    printf("Se a pessoa engordar 15 por cento do pessoa atual,ficara com  %.2f kilos\n",maior_peso);
    printf("Se a pessoa emagrecer  20 por cento do pessoa atual, ficara com  %.2f kilos\n",menor_peso);
}
