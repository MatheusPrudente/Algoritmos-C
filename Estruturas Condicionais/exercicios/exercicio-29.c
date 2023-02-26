/*
Faça Um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque
e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de
1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não
deve se preocupar com a quantidade de notas existentes na máquina.
    Exemplo  1:  Para  sacar  a  quantia  de  256  reais,  o  programa  fornece  duas  notas  de 100,
    uma nota de 50, uma nota de 5 e uma nota de 1;
    Exemplo  2:  Para  sacar  a  quantia  de  399  reais,  o  programa  fornece  três  notas  de 100,
    uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/

#include "stdio.h"


void main() {
    // unidade, dezena,centena e mil
    int numero;
    int unidade;
    int dezena;
    int centena;

    printf("Digite o valor a ser sacado (O valor mínimo é de 10 reais e o máximo de 600 reais.)\n\n\t R$ : ");
    scanf("%d",&numero);

    // As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais

    centena = numero/100;
    numero = numero - (100*centena);
    dezena = numero/10;
    numero = numero - (10*dezena);
    unidade = numero/1;
    numero = numero - (1*unidade);

    printf("\nSerao fornecidas :\n");

    if (centena > 0){
        if (centena == 1){
            printf("\t%d nota de 100 reais\n ",centena);
        } else {
            printf("\t%d notas de 100 reais\n ",centena);
        }
    }

    if (dezena > 0){
        if (dezena >= 5){
            printf("\t1 nota de 50 reais\n ");
            dezena  = dezena - 5;
        }

        if (dezena > 0){
            if (dezena == 1){
                printf("\t%d notas de 10 reais\n ",dezena);
            } else {
                printf("\t%d notas de 10 reais\n ",dezena);
            }
        }
    }

    if (unidade > 0){
        if (unidade > 5) {
            printf("\t1 nota de 5 reais\n ");
            unidade  = unidade - 5;
        }

        if (unidade > 0) {
            if (unidade == 1) {
                printf("\t%d notas de 1 reais\n",unidade);
            } else {
                printf("\t%d notas de 1 reais\n ",unidade);
            }
        }
    }
}
