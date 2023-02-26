/*
    Faça  um  programa  que  receba  a  idade  e  o  peso  de  uma  pessoa.
    De  acordo  com  a tabela a seguir, verifique e mostre em qual grupo de
    risco essa pessoa se encaixa.
*/

#include "stdio.h"


void main() {
    int idade;
    float peso;

    printf("Digite a idade da pessoa");
    scanf("%d",&idade);

    printf("Digite o peso da pessoa");
    scanf("%f",&peso);

    if (idade < 20) {
        if (peso < 60 ) {
            printf("Grupo de risco numero 9");
        } else if (peso >= 60 && peso <=90){
            printf("Grupo de risco numero 8");
        } else {
            printf("Grupo de risco numero 7");
        }
    } else if(idade >= 20 && idade <=50 ) {
        if (peso < 60 ){
            printf("Grupo de risco numero 6");
        } else if (peso >= 60 && peso <=90){
            printf("Grupo de risco numero 5");
        } else {
            printf("Grupo de risco numero 4");
        }
    } else {
        if (peso < 60 ) {
            printf("Grupo de risco numero 3");
        } else if (peso >= 60 && peso <=90){
            printf("Grupo de risco numero 2");
        } else {
            printf("Grupo de risco numero 1");
        }
    }
}
