/*
    Foi  realizada  uma  pesquisa  de  algumas  características  físicas  da  população  de
    uma certa região, a qual coletaram os seguintes dados referentes a cada habitante para
    serem analisados:

    Sexo (masculino e feminino);
    Cor dos olhos (azuis, verdes ou castanhos);
    Cor dos cabelos (louros, castanhos, pretos);
    Idade;

    Faça um algoritmo que determine e escreva:
    a) a maior idade dos habitantes;
    b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos, inclusive;
    c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros; O final do conjunto de
    habitantes é reconhecido pelo valor -1 informado como idade.
*/

#include "stdio.h"


void main() {
    int idade;
    int i = 0;
    int maior_idade = 0;
    int qtd_mulheres = 0;
    int olho_verde_e_cabelo_louro = 0;
    char sexo;
    char olho;
    char cabelo;
    int a= 0;
    int b= 0;

    while(i<1){
        printf("\nInforme a idade:(utilize -1 para sair)\n");
        scanf("%d",&idade);

        if (idade>0) {
            if(idade > maior_idade){
                maior_idade = idade;
            }

            printf("\nInforme o sexo\n\'F\' para feminino\n\'M\' para masculino\n");
            scanf("%s",&sexo);

            if(sexo == 'F' && idade >=18 && idade <=35){
                qtd_mulheres++;
            }

            printf("\nInforme a cor dos olhos\n\n\'A\' para azuis\n\'V\' para verdes\n\'C\' para castanhos\n");
            scanf("%s",&olho);

            if (olho == 'V'){
                a++;
            }

            printf("\nInforme a cor dos cabelos\n\'L\' para louros\n\'C\' para castanhos\n\'P\' para pretos\n");
            scanf("%s",&cabelo);

            if (cabelo == 'L'){
                b++;
            }

            if(a == 1 && b == 1){
                olho_verde_e_cabelo_louro++;
            }
        } else {
            i++;
        }
    }


    printf("a maior idade dos habitantes eh %d\n",maior_idade);
    printf("a quantidade de indivíduos do sexo feminino\n cuja idade está entre 18 e 35 anos eh de %d\n",qtd_mulheres);
    printf("a quantidade de indivíduos que tenham olho\n verdes e cabelos louros eh de %d\n",olho_verde_e_cabelo_louro);
}