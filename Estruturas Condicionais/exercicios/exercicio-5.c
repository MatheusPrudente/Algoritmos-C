/*
    Faça Um programa que receba dois número e mostre o maior.
*/

#include "stdio.h"


void main() {
    int num1;
    int num2;

    printf("Digite o primeiro numero\n");
    scanf("%d",&num1);
    printf("Digite o segundo numero\n");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("O primeiro numero eh maior que o segundo");
    } else if(num1 == num2){
        printf("O primeiro numero eh igual ao segundo");
    } else{
        printf("O segundo numero eh maior que o primeiro");
    }
}
