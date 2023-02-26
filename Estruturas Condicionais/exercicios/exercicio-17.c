/*
    O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  custo  de  fábrica  com
    a porcentagem  do  distribuidos  e  com  os  impostos,  ambos  aplicados  ao  custo  de
    fábrica. Sabe-se  que  as  porcentagens  são  as  mesmas  que  estão  na  tabela  a  seguir.
    Faça  um programa que receba o custo de fábrica de um carro e mostre o custo ao consumidor.
*/
#include "stdio.h"

void main() {
    float custo_final;
    float per_distribuidor;
    float per_imposto;
    float custo_fabrica;

    printf("Digite o valor de fabrica do veiculo\n");
    scanf("%f",&custo_fabrica);

    if(custo_fabrica < 12000){
        per_distribuidor = custo_fabrica*5/100;
        custo_final = per_distribuidor + custo_fabrica;

        printf("\nO valor final do veiculo eh %.2f",custo_final);
    } else if(custo_fabrica > 12000 && custo_fabrica < 25000){
        per_distribuidor = custo_fabrica*10 / 100;
        per_imposto = custo_final*15 / 100;
        custo_final = per_distribuidor + per_imposto +custo_fabrica;

        printf("\nO valor final do veiculo eh %.2f",custo_final);
    } else{
        per_distribuidor = custo_fabrica*15/100;
        per_imposto = custo_final*20 / 100;
        custo_final = per_distribuidor + per_imposto +custo_fabrica;

        printf("\nO valor final do veiculo eh %.2f",custo_final);
    }
}
