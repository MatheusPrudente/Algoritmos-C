/*Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo de um funcionário,
 calcule e mostre o salário líquido, de acordo com as regras a seguir:

a) A hora trabalhada vale 1% do salário mínimo;

b) O salário bruto equivale ao valor a receber pelas horas trabalhadas;

c) O imposto de renda retido na fonte é de 10% sobre o salário bruto.

d) O valor do INSS a ser descontado é de 5% sobre o salário bruto.

e) O salário líquido equivale ao salário bruto menos os descontos.*/

#include "stdio.h"
 
void main () {
	
int hora_trabalhada;
float valor_trabalhada;
float salario_minimo;
float salario_liquido;
float salario_bruto;
float renda;
float inss;
 
printf("\nDigite o salario minimo atual :  ");
scanf("%f",&salario_minimo);
printf("Digite o numero de horas trabalhas : ");
scanf("%d",&hora_trabalhada);

 
 
valor_trabalhada = hora_trabalhada*(salario_minimo*1/100);
 
salario_bruto = valor_trabalhada;

renda = salario_bruto*10/100;
inss  = salario_bruto*5/100;
 
 
salario_liquido = salario_bruto - (renda + inss);
 
printf("\nHoras trabalhadas: %d\n\n",hora_trabalhada);
printf("Salario bruto :  \n\n",salario_bruto);
printf("Descontos : \n\tinss :  %.2f reais\n\trenda de %.2f reais \n\n",inss,renda);
printf("Salario liquido : %.2f reais",salario_liquido);
 
}

