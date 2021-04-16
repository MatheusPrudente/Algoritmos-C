/*Um funcionário recebe um salário fixo. 
Sobre este salário fixo são acrescidos mais 7% de comissão sobre as suas vendas no mês, 
além dele pagar 10% de imposto sobre o salário. 
Faça um programa em C que receba o salário fixo e o valor de vendas de um
 funcionário, calcule e mostre o salário líquido dele.*/
 
#include "stdio.h"
 
void main () {
 
float salario_fixo;
float venda;
float comissao;
float imposto;
float salario_liquido;
 
printf(" Digite o salario fixo do funcionario : " );
scanf ("%f", &salario_fixo);
printf(" Digite o valor das vendas : " );
scanf ("%f", &venda);
 
comissao = venda*7/100;
imposto = salario_fixo*10/100;

salario_liquido = salario_fixo + comissao - imposto;
printf("\nO salario liquido do funcionario : %.2f ",salario_liquido);
 
}

