/*
    Faça um programa que receba N números e que calcule e mostre a porcentagem de
    números entre 30 e 90.
*/

#include "stdio.h"


void main() {
    int numero = 0;
    int qtd_numero = 0;
    int porcentagem = 0;
    int i = 0;

    while (i < 1) {
        printf("Informe os numeros : \n(utilize um valor negativo para sair)\n  ");
        scanf ("%d",&numero);

        if ( numero >= 0) {
            qtd_numero++;
            if((numero  >= 30)&&(numero <=90)){
                porcentagem = porcentagem + 1;
            }

        } else {
            i++;
        }
    }
    porcentagem = porcentagem * 100/qtd_numero;
    printf("a porcentagem de numeros entre 30 e 90 eh de %d", porcentagem);
}