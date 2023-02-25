/*
    Escreva um programa que receba o salário‐base de um funcionário, calcule e mostre o seu  salário  a  receber,  sabendo‐
    se  que  esse funcionário  tem  gratificação  de  R$50,00  e paga imposto de 10% sobre o salário ‐ base.
*/

#include "stdio.h"


void main () {
    float salario_base;
    float salario_final;
    float gratificacao = 50.00;
    float imposto;

    printf(" Digite o salario base do funcionario : \n" );
    scanf ("%f", &salario_base);
    imposto = salario_base*10/100;

    salario_final = (salario_base - imposto) + gratificacao;
    printf("O salario final do funcionario eh %.2f",salario_final );
}
