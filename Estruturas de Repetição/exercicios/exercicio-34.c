/*
    Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor de E
*/

#include "stdio.h"


void main() {
    int numero;
    int i = 1;
    int j = 1;
    float fatorial= 1;
    float e = 1;

    printf ("\nInforme o numero fatorial (n!)\n");
    scanf ("%d",&numero);

    while (i<=numero) {
        while (j<=i){
            fatorial=fatorial*j;
            j++;
        }
        e=e+(1+numero/fatorial);
        i++;
    }
    printf ("\n%f",e);
}
