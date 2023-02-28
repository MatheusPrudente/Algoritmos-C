/*
    Faça um programa que leia 5 números e informe o maior número.
*/
#include "stdio.h"


void main() {
    int num;
    int num_maior = 0;
    int i = 0;

    while (i < 5) {
        printf("\nDigite um valor inteiro\n");
        scanf("%d",&num);

        if (num_maior < num){
            num_maior = num;
        }
        i++;
        num = 0;
    }
    printf("\nO maior numero digitado foi %d\n",num_maior);
}
