/*
    João recebeu seu salário e precisa pagar duas contas atrasadas.
    Em razão do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um
    programa que calcule e mostre quanto restará do salário de João
*/

#include "stdio.h"


void main () {
    float salario;
    float conta1;
    float conta2;

    printf(" Digite o valor do salario do joao\n" );
    scanf ("%f", &salario);
    printf(" Digite o valor da conta 1\n" );
    scanf ("%f", &conta1);
    printf(" Digite o valor da conta 2\n" );
    scanf ("%f", &conta2);
    conta1 = conta1 + (conta1*2/100);
    conta2 = conta2 + (conta2*2/100);
    salario = salario - conta1 - conta2;

    printf(" Os salario do joao depois de pagar as contas eh de %f \n ",salario);
}

