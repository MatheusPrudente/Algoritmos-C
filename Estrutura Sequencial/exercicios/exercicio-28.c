/*
    Faça  um  programa que  receba  o  número  de  horas  trabalhadas,
    o  valor  do  salário mínimo  e  o  número  de  horas  extras  trabalhadas,
    calcule  e  mostre  o  salário  líquido,  de acordo com as regras a seguir:

        a) A hora normal trabalhada vale 0.5% do salário mínimo;
        b) A hora extra vale 1% do salário mínimo;
        c) O salário base equivale ao valor a receber pelas horas normais trabalhadas;
        d)  A  quantia  a  receber  pelas  horas  extras  equivale  ao  número  de  horas  extras trabalhadas multiplicado pelo valor da hora extra;
        e)  O  salário  bruto  é  a  soma  do  salário  base  com  o  valor  a  receber  pelas  horas extras;
        f) O imposto de renda retido na fonte é de 11% sobre o salário bruto.
        g) O valor do INSS a ser descontado é de 7% sobre
        o salário bruto.
        h) O salário líquido equivale ao salário bruto
*/

#include "stdio.h"

void main () {
    int hora_trabalhada;
    int hora_extra;
    int valor_trabalhada;
    int valor_extra;
    int salario_minimo;
    int salario_liquido;
    int salario_base;
    int salario_bruto;
    int renda;
    int inss;


    printf("Digite o salario minimo atual \n");
    scanf("%d",&salario_minimo);
    printf("Digite o numero de horas trabalhas atual \n");
    scanf("%d",&hora_trabalhada);
    printf("Digite o numero de horas extras trabalhas atual \n");
    scanf("%d",&hora_extra);

    valor_trabalhada = hora_trabalhada*(salario_minimo*0.5/100);
    valor_extra = hora_extra*(salario_minimo*1/100);
    salario_base = valor_trabalhada;
    salario_bruto = salario_base + valor_extra;
    renda = salario_bruto*11/100;
    inss  = salario_bruto*7/100;
    salario_liquido = salario_bruto - (renda + inss);

    printf("Foram trabalhadas %d horas e %d horas extras \nque equivalem a %d reais e %d reais  respectivamente\n",hora_trabalhada,hora_extra,valor_trabalhada,valor_extra);
    printf("Dando um salário base de %d reais  e o  salário bruto é de %d reais \n",salario_base,salario_bruto);
    printf("Recebendo descontos do inss de %d reais  e da renda de %d reais \n",inss,renda);
    printf("Totalizando um salario_liquido de %d \n reais",salario_liquido);
}
