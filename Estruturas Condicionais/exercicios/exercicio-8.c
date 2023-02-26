/*
    Escreva um programa que identifique se um número é par ou ímpar.
*/

#include "stdio.h"

void main() {
    int num;
    printf(" Digite um numero inteiro\n");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("O numero eh par\n");
    } else{
        printf("O numero eh impar\n");
    }
}
