/*
    Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
    Faça um programa que receba o salário fixo de um funcionário e o valor de
    suas vendas, calcule e mostre a comissão e o salário final do funcionário.
*/

#include "stdio.h"

void main () {
    float salario;
    float venda;
    float comissao;
    float salario_final;

    printf(" Digite o salario fixo do funcionario\n" );
    scanf ("%f", &salario);
    printf(" Digite o valor das vendas\n" );
    scanf ("%f", &venda);

    comissao = venda*4/100;
    salario_final = salario + comissao;
    printf("A comissao foi de %.2f \n eh com um salario de final de %.2f ",comissao,salario_final);
}
