/*
    Um funcionorio recebe um salario fixo. 
    Sobre este salario fixo sao acrescidos mais 7% de comissao sobre as suas vendas no mes, 
    alem dele pagar 10% de imposto sobre o salario. 
    Faca um programa em C que receba o salario fixo e o valor de vendas de um
    funcionario, calcule e mostre o salario liquido dele.
 */
 
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

