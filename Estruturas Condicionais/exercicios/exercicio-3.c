/*
    Faça  um  programa que  receba  a  idade  de  uma  pessoa  e
    mostre  uma  mensagem informando a maioridade ou não desta pessoa.
*/

#include "stdio.h"

void main() {
    int idade;

    printf("Digite a idade da pessoa\n");
    scanf("%d",&idade);

    if(idade >= 18){
        printf("Esta pessoa eh de maior\n");
    } else{
        printf("Esta pessoa eh de menor\n");
    }
}
