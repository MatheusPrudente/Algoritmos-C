/*
    Faça um programa que receba a idade e o peso de dez pessoas. Calcule e mostre:
    A porcentagem de pessoas com mais de 90 quilos;A média das idades das dez;
*/

#include "stdio.h"


void main() {
    int idade;
    float peso;
    int media = 0;
    int porcentagem = 0;

    for (int i = 1; i <= 10; i++){
        printf (" Digite a idade da pessoa %d\n",i);
        scanf("%d",&idade);

        printf (" Digite o peso da pessoa %d\n",i);
        scanf("%f",&peso);

        if(peso > 90 ){
            porcentagem++;
        }
        media = media + idade;
    }
    porcentagem = porcentagem * 100/10;
    media = media / 10;

    printf (" A porcentagem de pessoas com mais de 90 quilos eh de %d\n", porcentagem);
    printf (" A media das idades das dez pessoas eh %d ",media);
}