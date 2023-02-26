/*
    Faça  um  programa  que  receba
    a  idade  de  um  nadador  e  mostre
    a  sua  categoria usando as regras a seguir:
*/

#include "stdio.h"


void main() {
    int idade;

    printf("Digite a idade do atleta\n");
    scanf("%d",&idade);

    if(5 <=idade && idade <=7){
        printf("O atleta eh da categoria infantil");
    } else if(8 <=idade && idade <=10){
        printf("O atleta eh da categoria juvenil");
    } else if(11 <=idade && idade <=15){
        printf("O atleta eh da categoria adolescente");
    } else if(16 <=idade && idade <=30){
        printf("O atleta eh da categoria adulta");
    } else if(idade > 30){
        printf("O atleta eh da categoria senior");
    } else{
        printf("O atleta não pode competir");
    }
}
