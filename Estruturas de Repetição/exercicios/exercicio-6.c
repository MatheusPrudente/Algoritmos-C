/*
    Faça  um  programa  que  peça  dois  números,  base  e  expoente,  calcule  e
    mostre  o primeiro  número  elevado  ao  segundo  número.  Não  utilize  a
    função  de  potência  da linguagem.
*/

#include "stdio.h"

void main() {
    int num1;
    int num2;
    int potencia = 0;
    int i = 1;

    printf("\nDigite um valor inteiro para ser a base\n");
    scanf("%d",&num1);

    printf("\nDigite um valor inteiro para ser o expoente\n");
    scanf("%d",&num2);

    potencia = num1;

    while (i < num2){
        potencia = potencia*num1;
        i++;
    }

    printf("\nO resultado de %d elevado a %d eh %d\n",num1,num2,potencia);
}
