/*
    Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código
    Os códigos utilizados são:
        1 , 2, 3, 4  - Votos para os respectivos candidatos (você deve montar a tabela
        ex: 1 -Jose/ 2-João/etc)

        5 -Voto Nulo
        6 -Voto em Branco

        Faça um programa que calcule e mostre:
        O total de votos para cada candidato;
        O total de votos nulos;
        O total de votos em branco;
        A percentagem de votos nulos sobre o total de votos;
        A porcentagem de votos em branco sobre o total de votos.
        Para finalizar o conjunto de votos tem-se o valor zero
*/


#include "stdio.h"

int main() {
    int i = 0;
    int opcao = 0;
    int qtd_eleitor = 0;
    int total_candidato1 = 0;
    int total_candidato2 = 0;
    int total_candidato3 = 0;
    int total_candidato4 = 0;
    int nulo = 0;
    int branco = 0;
    float porcentagem_nulo;
    float porcentagem_branco;

    while(i<1) {
        printf("Opcoes de votos : \n");
        printf("0 - Sair\n");
        printf("1 - Jose\n");
        printf("2 - Joao\n");
        printf("3 - Jean\n");
        printf("4 - Jorel\n");
        printf("5 - Voto Nulo\n");
        printf("6 - Voto em Branco\n");

        printf("Informe sua opcao : ");
        scanf("%d",&opcao);

        if(opcao > 0 && opcao <7){
            if(opcao == 1){
            total_candidato1++;
            } else if(opcao == 2){
            total_candidato2++;
            } else if(opcao == 3){
            total_candidato3++;
            } else if( opcao == 4){
            total_candidato4++;
            } else if( opcao == 5){
            nulo++;
            } else {
            branco++;
            }

            qtd_eleitor++;
        } else{
            i++;
        }
    }

    if(porcentagem_nulo != 0 && porcentagem_branco !=0){
        porcentagem_nulo = nulo*100/qtd_eleitor;
        porcentagem_branco = branco*100/qtd_eleitor;
    }

    printf("\nO total de votos para cada candidato Jose eh : %d voto(s)\n",total_candidato1);
    printf("O total de votos para cada candidato Joao eh : %d voto(s)\n",total_candidato2);
    printf("O total de votos para cada candidato Jean eh : %d voto(s)\n",total_candidato3);
    printf("O total de votos para cada candidato Jorel eh : %d voto(s)\n",total_candidato4);
    printf("O total de votos nulos eh : %d voto(s)\n",nulo);
    printf("O total de votos em branco eh : %d voto(s)\n ",branco);
    printf("A percentagem de votos nulos sobre o total\n de votos eh %.1f\n",porcentagem_nulo);
    printf("A porcentagem de votos em branco sobre o total\n de votos eh %.1f\n",porcentagem_branco);
}
