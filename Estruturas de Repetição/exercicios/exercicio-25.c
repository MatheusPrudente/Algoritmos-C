/*
    Faça um programa que leia um número inteiro, determine e escreva para o usuário se
    o número é primo ou não. Lembre-se que para um número ser primo ele deve ser divisível
    apenas por 1 e por ele mesmo.

*/

#include "stdio.h"

void main() {
    int num, i, resultado = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 1 ) {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                resultado++;
                break;
            }
        }

        if (resultado == 0) {
            printf("%d é um número primo\n", num);
        } else {
            printf("%d não é um número primo\n", num);
        }
    } else {
        printf("O numero 0 e 1 nao sao primos");
    }
}