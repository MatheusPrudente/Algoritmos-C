/*
    Faça  um programa que  leia  o  número  de  um  vendedor,
    o  seu  salário  fixo,  o  total  de vendas  (em  reais)
    por  ele  efetuadas  e  o  percentual  que  ganha  sobre  o  total  de  vendas,
    calcule o salário
    total do vendedor e escreva o número e o salário do vendedor.
*/

#include "stdio.h"


void main () {
    int funcionario;
    float salario;
    float venda;
    float percentual;
    float salario_final;

    printf("Informe o numero do funcionario\n");
    scanf("%d",&funcionario);

    printf("Informe o salario fixo do funcionario\n");
    scanf("%f",&salario);

    printf("Informe o total de vendas em reais\n");
    scanf("%f",&venda);

    printf("Informe o percentual para cada venda\n");
    scanf("%f",&percentual);
    salario_final = salario + (venda*percentual/100);

    printf("O vendedor de numero %d tem o salario final eh de R$ %.2f\n",funcionario,salario_final);
}
