/*
    Faça  um  programa  que  receba  o  valor  do  salário  mínimo  e  o 
    valor  do  salário  de  um funcionário,
    calcule e mostre a quantidade de salários mínimos que este funcionário ganha.
*/

#include "stdio.h"

void main () {
    float salario_funcionario;
    float salario_minimo;
    float quantidade;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&salario_funcionario);
    printf("Digite o salario minimo\n");
    scanf("%f",&salario_minimo);
    quantidade = salario_funcionario/salario_minimo;

    printf("Este funcionario ganha %.1f salario(s) minimo(s)\n",quantidade);
}
