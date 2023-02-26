/*
    Faça  um  programa  para  a  leitura  de  duas  notas  parciais  de  um  aluno.
    O  programa deve calcular a média alcançada por aluno e apresentar:

    A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    A mensagem "Reprovado", se a média for menor do que sete;
    A mensagem "Aprovado com Distinção", se a média for igual a dez.

*/

#include "stdio.h"

void main() {
    float nota_final;
    float nota1;
    float nota2;


    printf("A primeira nota parcial do aluno\n");
    scanf("%f",&nota1);


    printf("A segunda nota parcial do aluno\n");
    scanf("%f",&nota2);


    nota_final = (nota1 + nota2)/2;

    if(nota_final == 10){
        printf("Aprovado com Distinção\n");
    } else if( nota_final < 10 && nota_final >= 7){
        printf("Aprovado\n");
    } else{
        printf("Reprovado\n");
    }
}

