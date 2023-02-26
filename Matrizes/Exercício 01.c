//refazer
/*Fa�a um programa que leia uma matriz 5x5 e um valor X.
O programa dever� fazer uma busca desse valor na matriz e,
 ao final, escrever a localiza��o (linha e coluna) ou uma mensagem de �n�o encontrado�.*/

#include "stdio.h"

void main() {
    int matriz [5][5];
    int valor = 0;
    int encontrado = 0;
    int coluna_valor = 0;
    int linha_valor = 0;
    int i;
    int j;
    printf("\n ==== matriz  ==== \n\n");

    for ( i = 0 ; i < 5; i++){
        for( j = 0; j <5; j++){
            printf("Informe o valor [%d][%d] : ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n\nInforme o valor perdido : ");
    scanf("%d",&valor);
    printf("\n ==== matriz  ==== \n\n");

    for ( i = 0 ; i < 5; i++){
        for( j = 0; j <5; j++){
            printf(" %d ",matriz[i][j]);

            if (valor == matriz[i][j]){
                linha_valor = i;
                coluna_valor = j;
                encontrado++;
            }
        }
        printf("\n");
    }

    if ( encontrado > 0){
        printf("\nValor encontrado na linha %d e coluna %d .",linha_valor+1,coluna_valor+1);
    } else {
        printf("\n\nNao encontrado");
    }
}