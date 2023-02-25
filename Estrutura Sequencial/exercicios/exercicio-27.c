/*
    Faça  um  programa  que  receba  uma  hora  (uma  variável  para  hora  e  outra  para minutos),
    calcule e mostre:

    a) a hora digitada convertida em minutos;
    b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
    c) o total dos minutos convertidos em segundos.
*/

#include "stdio.h"

void main () {
    int hora;
    int minuto;
    int minuto_hora;
    int minuto_total;
    int segundo;


    printf("\nDigite o numero de horas completas \n");
    scanf("%d",&hora);
    printf("Digite o numero de minutos \n");
    scanf("%d",&minuto);


    minuto_hora = hora *60;
    minuto_total = minuto + minuto_hora;
    segundo = minuto_total*60;


    printf("\nAs %d hora(s) equivalem a %d minuto(s)\n",hora,minuto_hora);
    printf("totalizando  %d minuto(s)\n",minuto_total);
    printf(" o total de %d minuto(s) equivalem a %d segundo(s)\n",minuto_total,segundo);
}
