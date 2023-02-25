/*
    Faça um programa que receba o valor dos catetos de um triângulo,
    calcule e mostre o valor da hipotenusa.
*/

#include “stdio.h”
#include “math.h”


int main() {
    int cateto1;
    int cateto2;
    int hipo;

    printf("Informe o primeiro  cateto\n");
    scanf("%d",&cateto1);

    printf("Informe o segundo cateto\n");
    scanf("%d",&cateto2);

    hipo  = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("a hipotenosa eh %d\n",hipo);
}
