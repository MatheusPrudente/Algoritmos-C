/*
    Escreva um programa que receba um valor inteiro e diga se ele é múltiplo de 5.
*/

#include "stdio.h"
int main() {
    int num;
    printf(" Digite um numero inteiro\n");
    scanf("%d",&num);

    if(num%5 == 0){
        printf("O numero eh multiplo de 5\n");
    } else{
        printf("O numero nao eh multiplo de 5\n");
    }
}
