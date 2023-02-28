/*
    Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor
    seja inválido e continue pedindo até que o usuário informe um valor válido.
*/

#include "stdio.h"


void main() {
    int x = 0;
    int numero;

    while (x == 0) {
        printf("\nDigite um valor inteiro entre zero e dez\n");
        scanf("%d",&numero);

        if (numero >= 0 && numero <= 10){
            printf("Eh um numero valido");
            x++;
        } else{
            printf("Eh um numero invalido");
        }
    }
}
