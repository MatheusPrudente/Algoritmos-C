/*Um funcion�rio recebe um sal�rio fixo. 
Sobre este sal�rio fixo s�o acrescidos mais 7% de comiss�o sobre as suas vendas no m�s, 
al�m dele pagar 10% de imposto sobre o sal�rio. 
Fa�a um programa em C que receba o sal�rio fixo e o valor de vendas de um
 funcion�rio, calcule e mostre o sal�rio l�quido dele.*/
 
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

