/*
 Um  banco  concederá  um  crédito  especial  aos  seus  clientes  de  acordo
 com  o  saldo médio no último ano. Faça um programa que receba o saldo médio
 de um cliente e calcule o  valor  do  crédito,  de  acordo
 com  a  tabela  a  seguir.  Mostre  o  saldo  médio  e  o  valor  do crédito
 */

#include "stdio.h"

void main() {
    float saldo;
    float valor_crédito;

    printf("Digite o saldo do cliente\n");
    scanf("%f",&saldo);

    if(saldo > 400){
        valor_crédito = saldo + (saldo*30/100);
        printf("Sofreu um aumento de 30 por cento, finalizando com %.2f\n",valor_crédito);
    } else if(saldo <= 400  && saldo >=300){
        valor_crédito = saldo + (saldo*25/100);
        printf("Sofreu um aumento de 25 por cento, finalizando com %.2f\n",valor_crédito);
    } else if(saldo < 300  && saldo >=200){
        valor_crédito = saldo + (saldo*20/100);
        printf("Sofreu um aumento de 20 por cento, finalizando com %.2f\n",valor_crédito);
    } else if(saldo < 200){
        valor_crédito = saldo + (saldo*10/100);
        printf("Sofreu um aumento de 10 por cento, finalizando com %.2f\n",valor_crédito);
    }
}
