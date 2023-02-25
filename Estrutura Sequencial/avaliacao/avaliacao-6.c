/*Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo de um funcion�rio,
 calcule e mostre o sal�rio l�quido, de acordo com as regras a seguir:

a) A hora trabalhada vale 1% do sal�rio m�nimo;

b) O sal�rio bruto equivale ao valor a receber pelas horas trabalhadas;

c) O imposto de renda retido na fonte � de 10% sobre o sal�rio bruto.

d) O valor do INSS a ser descontado � de 5% sobre o sal�rio bruto.

e) O sal�rio l�quido equivale ao sal�rio bruto menos os descontos.*/

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

