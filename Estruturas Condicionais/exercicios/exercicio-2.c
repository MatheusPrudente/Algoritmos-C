/*
    Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
*/

#include "stdio.h"


int main() {
    int numero;
    printf("Digite um numero inteiro \n");
    scanf("%d",&numero);

    if(numero > 0) {
        printf("O numero %d eh positvo\n",numero);
    } else {
        printf("O numero %d eh negativo\n",numero);
    }
}
