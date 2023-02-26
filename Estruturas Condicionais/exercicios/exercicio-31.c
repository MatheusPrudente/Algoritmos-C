/*
    Faça  um  programa  que  faça  5  perguntas  para  uma  pessoa  sobre  um  crime.
    As perguntas são:
        "Telefonou para a vítima?"
        "Esteve no local do crime?"
        "Mora perto da vítima?"
        "Devia para a vítima?"
        "Já trabalhou com a vítima?"

    O  programa  deve  no  final  emitir  uma  classificação  sobre  a  participação  da
    pessoa  no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada
    como "Suspeita",  entre  3  e  4  como  "Cúmplice"  e  5  como  "Assassino".  Caso  contrário,
    ele  será classificado como "Inocente".
*/

#include "stdio.h"
#include "math.h"

void main() {
    int resposta1;
    int resposta2;
    int resposta3;
    int resposta4;
    int resposta5;

    printf("Responda as perguntas com 1 para sim ou 2 para nao\n\n");
    printf("Telefonou para a vítima?\n");
    scanf("%d",&resposta1);
    printf("Esteve no local do crime?\n");
    scanf("%d",&resposta2);
    printf("Mora perto da vítima?\n");
    scanf("%d",&resposta3);
    printf("Devia para a vítima?\n");
    scanf("%d",&resposta4);
    printf("Já trabalhou com a vítima?\n");
    scanf("%d",&resposta5);

    if ( resposta5 == 1){
        printf("Assassino\n");
    } else if (resposta3 == 1 || resposta2 == 1 ){
        printf("Cumplice\n");
    } else if (resposta2== 1 ){
        printf("Suspeita\n");
    } else{
        printf("Inocente\n");
    }
}
