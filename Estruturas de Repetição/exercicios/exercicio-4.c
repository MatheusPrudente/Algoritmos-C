/*
    Faça um programa que leia 5 números e informe a soma e a média dos números.
*/

#include "stdio.h"

void main() {
    int num;
    int num_soma= 0;
    int num_media = 0;
    int i = 0;

    while (i < 5) {
        printf("\nDigite um valor inteiro\n");
        scanf("%d",&num);
        num_soma = num + num_soma;

        if (i == 4){
            num_media = num_soma/5;
        }
        i++;
    }

    printf("\nA soma de todos os numeros eh %d e a media entre eles\neh %d\n",num_soma,num_media);
}
