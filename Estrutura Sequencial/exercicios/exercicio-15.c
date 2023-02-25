/*
    O custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  preço  de  fábrica
    com  o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
    Faça um programa  que  receba  o  preço  de  fábrica  de  um  veículo,  o  percentual 
    de  lucro  do distribuídos e
    o percentual de impostos, calcule e mostre:

    a) O valor correspondente ao lucro do distribuidor;
    b) O valor correspondente aos impostos;
    c) O preço final do veículo;
*/

#include "stdio.h"


void main () {
    float preco_fabrica;
    float percentual_distribuidor;
    float percentual_imposto;
    float custo_total;


    printf("Digite o valor de fabrica do veiculo\n");
    scanf("%f",&preco_fabrica);
    printf("Digite o percentual de impostos em porcentagem\n");
    scanf("%f",&percentual_imposto);
    printf("Digite o percentual do distribuidorem porcentagem\n");
    scanf("%f",&percentual_distribuidor);

    percentual_imposto = preco_fabrica*percentual_imposto/100;
    percentual_distribuidor = preco_fabrica*percentual_distribuidor/100;


    custo_total = preco_fabrica + percentual_distribuidor + percentual_imposto;

    printf("O o precentual de impostos eh %.3f\n",percentual_imposto);
    printf("O percentual do distribuidor eh %.3f\n",percentual_distribuidor);
    printf("O valor total do veiculo eh %.3f\n",custo_total);
}
