/*
    Foi  feita  uma  pesquisa  entre  os  habitantes  de  uma  região  e  coletados  os  dados  de
    altura  e  sexo  (0=masculino,  1=feminino)  das  pessoas.  Faça  um  programa  que  leia  50
    dados  diferentes  e  informe: a maior e  a menor  altura  encontradas;a média  de  altura  das
    mulheres; a média de altura da população; o percentual de homens na população.
*/


#include "stdio.h"


void main() {
    float altura,maior_altura,menor_altura,media_altura_mulher,media_altura,soma_altura_mulher,soma_altura;
    int sexo,i,qtd_pessoa,qtd_homem,qtd_mulher;
    i = 1;
    sexo = 0;
    menor_altura = 11110;
    maior_altura = 0;
    soma_altura = 0;
    media_altura = 0;
    soma_altura_mulher = 0;
    media_altura_mulher = 0;
    qtd_homem = 0;
    qtd_mulher = 0;
    qtd_pessoa = 0;


    while (i< 51) {
        printf("\nInforme a altura da pessoa %d : \n", i);
        scanf("%f",&altura);

        printf("informe o sexo  da pessoa %d\n0 = masculino 1=feminino\n", i);
        scanf("%d",&sexo);
        soma_altura = soma_altura + altura;

        if(sexo == 0){
            qtd_homem ++;
        } else {
            qtd_mulher++;
            soma_altura_mulher = soma_altura_mulher + altura;
        }

        if(altura > maior_altura){
            maior_altura = altura;
        } else if (altura < menor_altura){
            menor_altura = altura;
        }

        qtd_pessoa++;
        i++;
    }

    media_altura = soma_altura/qtd_pessoa;
    media_altura_mulher = soma_altura_mulher/qtd_mulher;
    qtd_homem = qtd_homem*100/qtd_pessoa;

    printf("\nA maior  altura  encontrada eh %.2f  \n", maior_altura);
    printf("\nA menor  altura  encontrada eh %.2f  \n", menor_altura);
    printf("\na media de altura da populacao %.2f  \n", media_altura);
    printf("\nA media  de  altura  das mulheres %.2f  \n", media_altura_mulher);
    printf("\nO percentual de homens na populacao %d \n", qtd_homem);
}