/*
    Faça  um  programa  que,  leia  o peso  a altura de  uma  pessoa,  calcule  o
    Índice  de Massa Corporal (IMC) da mesma e escreva para o usuário o resultado
    com base na tabela abaixo.
*/

#include "stdio.h"


void main() {
    float peso;
    float altura;
    float IMC;
    char situacao;

    printf("Digite o peso da pessoa\n");
    scanf("%f",&peso);
    printf("Digite a altura da pessoa\n");
    scanf("%f",&altura);

    IMC = peso /(altura * altura);

    //Muito abaixo do peso
    if (IMC < 17){
        printf("O IMC eh %f sendo que esta pessoa esta muito abaixo do peso \n",IMC);
    } else if (IMC > 17 && IMC <=18.49){
        printf("O IMC eh %f sendo que esta pessoa esta  abaixo do peso \n",IMC);
    } else if (IMC >= 18.5 && IMC <=24.99){
        printf("O IMC eh %f sendo que esta pessoa esta com peso normal \n",IMC);
    } else if (IMC >= 25 && IMC <=29.99){
        printf("O IMC eh %f sendo que esta pessoa esta acima do peso \n",IMC);
    } else if (IMC >+ 30 && IMC <=34.99){
        printf("O IMC eh %f sendo que esta pessoa esta com obesidade I\n",IMC);
    } else if (IMC >= 35 && IMC <=39.99){
        printf("O IMC eh %f sendo que esta pessoa esta com obesidade II\n",IMC);
    } else if (IMC >= 40){
        printf("O IMC eh %f sendo que esta pessoa esta com obesidade II\n",IMC);
    }
}
