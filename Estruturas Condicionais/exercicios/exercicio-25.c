/*
    Escreva  um programa que  receba  o  valor  do  salário  mínimo,  o  número  de  horas trabalhadas,
    o  número  de  dependentes  do  funcionário  e  quantidade  de  horas  extras trabalhadas.
    Calcule e mostre o salário a receber do funcionário de acordo com as regras a seguir:
    O valor da hora trabalhada é igual a 1/5 do salário mínimo;
    O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    Para cada dependente acrescentar R$ 32,00;
    Para  cada  hora  extra  trabalhada  calcular  o  valor  da  hora  trabalhada acrescida  de 50%;
    O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas extras;
    Calcular  o  valor  do  imposto  de  renda  retido  na  fonte  de  acordo  com  a  tabela  a seguir:

    O salário líquido é igual ao salário bruto menos o IRRF;
    A gratificação de acordo com a tabela a seguir.


    O salário a receber do funcionário é igual salário líquido mais a gratificação.
*/

#include "stdio.h"


void main() {
    float salario_minimo;
    float hora_trabalhada;
    float numero_dependente;
    float hora_extra;

    float valor_trabalhado;
    float valor_extra;
    float valor_dependente;
    float salario_mes;
    float salario_bruto;
    float salario_liquido;
    float IRRF;

    printf("Digite o salario minimo\n");
    scanf("%f",&salario_minimo);

    printf("Digite o numero de horas trabalhadas\n");
    scanf("%f",&hora_trabalhada);

    printf("Digite o numero de horas extras\n");
    scanf("%f",&hora_extra);

    printf("Digite o numero de dependente\n");
    scanf("%f",&numero_dependente);

    valor_trabalhado = salario_minimo*20/100;
    salario_mes = valor_trabalhado * hora_trabalhada;


    valor_extra = (valor_trabalhado *1.5) * hora_trabalhada;
    salario_bruto = (numero_dependente * 32.00) + valor_extra + salario_mes;

    if (salario_bruto >= 200.00 && salario_bruto <=500.00){
        IRRF = salario_bruto *10/100;
    } else if(salario_bruto > 500) {
        IRRF = salario_bruto *20/100;
    }

    salario_liquido = salario_bruto - IRRF;

    if (salario_liquido <=350){
        salario_liquido = salario_liquido +100.00;
    } else if (salario_liquido > 350) {
        salario_liquido = salario_liquido +50.00;
    }

    printf("O salario do funcionario eh %.2f\n",salario_liquido);
}
