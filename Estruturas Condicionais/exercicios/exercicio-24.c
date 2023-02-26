/*
    Faça um programa que receba:
    O código do produto comprado;
    A quantidade comprada de um produto.
    Calcule e mostre:
        O preço unitário do produto comprado seguindo a Tabela I;
        O preço total da nota;
        O valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota;
        O preço final da nota depois do desconto.
*/

#include "stdio.h"

void main(){
    int codigo;
    int quantidade;
    float nota;
    float nota_desconto;

    printf("\nDigite o codigo do produto\n");
    scanf("%d",&codigo);

    printf("\nDigite a quantidade comprada do produto\n");
    scanf("%d",&quantidade);


    if (codigo <=10){
        nota = quantidade * 10;
    } else if (codigo <=11 && codigo >=20){
        nota = quantidade * 15;
    } else if (nota >= 21 && nota <= 30){
        nota = quantidade * 20;
    } else if (nota >= 31 && nota <=40){
        nota = quantidade * 30;
    }

     printf("O valor da total da nota eh : %.2f ",nota);

    if (nota <250){
        nota_desconto = nota - (nota*5/100);
    } else if (nota >=250 && nota <= 500){
        nota_desconto = nota - (nota*10/100);
    } else if (nota >500){
        nota_desconto = nota - (nota*15/100);
    }

    printf("\nO valor da total da nota com desconto eh : %.2f ",nota_desconto);
}
