/*
    Faça  um  programa  para  uma  loja  de  tintas.
    O  programa  deverá  pedir  o  tamanho  em metros  quadrados  da
    área  a  ser  pintada.  Considere  que  a  cobertura  da  tinta  é
    de  1  litro para cada 3 metros quadrados e que a tinta é vendida em
    latas de 18 litros, que custam R$ 80,00.
    Informe  ao  usuário  a quantidades  de  latas  de  tinta  a  serem
    compradas  e  o  preço total.
*/

#include "stdio.h"


void main () {
    float quadrado;
    float tinta;
    float custo;

    printf("Informe os metros quadrados a serem pintados,caso seja numero com virgula, coloque ponto ao inves de virgula(Exemplo: 3.5)\n");
    scanf("%f",&quadrado);
    //1 litro = 3 metros quadrados
    tinta = quadrado/3;
    custo = tinta*80.00;

    printf("Para pintar os %f metros quadrados, sao necessario %.2f litros que custam R$ %.2f\n",quadrado,tinta,custo);
}

