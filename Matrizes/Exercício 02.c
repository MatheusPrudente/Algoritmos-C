/*Dizemos que uma matriz quadrada � um quadrado m�gico
se a soma dos elementos de cada linha, a soma dos elementos
de cada coluna e a soma dos elementos das diagonais principal
e secund�ria s�o todas iguais. Fa�a um programa que, dado uma matriz quadrada,
informe se esta matriz � ou n�o um quadrado m�gico.
Note que, o termo �matriz quadrada� se refere a matrizes que possuem o mesmo n�mero de linhas e colunas (Ex.: 3x3, 4x4, 5x5, etc..).*/

#include "stdio.h"

void main() {
    /* O codigo desconsidera matriz 2x2, mesmo que sejam quadrados magicos
    pois no enunciado comeca com 3X3 ou mais*/

    //quadrado magico
    // int matriz [3][3] = {{2,7,6},{9,5,1},{4,3,8}};
    //quadrado nao magico
    //int matriz [3][3] = {{9,10,6},{19,5,1},{4,43,8}};

    int soma_diagonal = 0;
    int quadrado_magico = 0;
    int i;
    int j;
    int tam_matriz;

    printf("Informe o tamanho da matriz :");
    scanf("%d",&tam_matriz);

    printf("\n\nA matriz gerada de tamanho [%d][%d] \n\n",tam_matriz,tam_matriz);

    int vetor_linha[tam_matriz];
    int vetor_coluna [tam_matriz];
    int vetor_diagonal [2];

    int matriz[tam_matriz][tam_matriz];

    printf("\n ==== matriz  ==== \n\n");

    for ( i = 0 ; i < tam_matriz; i++){
        for( j = 0; j <tam_matriz; j++){
            printf("Informe o valor [%d][%d] : ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    //verificar colunas
    for ( i = 0; i <tam_matriz; i ++){
        int soma_coluna = 0;
        for ( j = 0; j <tam_matriz; j ++) {
            soma_coluna = soma_coluna + matriz[j][i];
        }
        vetor_coluna[i] = soma_coluna;
    }

     // verificar linhas
    for ( i = 0; i <tam_matriz; i ++) {
        int soma_linha = 0;
        for ( j = 0; j <tam_matriz; j ++) {
            soma_linha = soma_linha + matriz[i][j];
        }
        vetor_linha[i] = soma_linha;
    }
    printf("\n");



    //verificar diagonal
    for ( i =0; i < tam_matriz ; i++){
        soma_diagonal = soma_diagonal + matriz [i][i];
    }

    vetor_diagonal[0] = soma_diagonal;
    soma_diagonal = 0;

    for ( i = tam_matriz-1; i >= 0 ; i--){
        soma_diagonal = soma_diagonal + matriz [i][i];
    }

    vetor_diagonal[1] = soma_diagonal;

    printf("==== matriz ====\n\n");

    for ( i = 0 ; i < tam_matriz; i++){
        for( j = 0; j <tam_matriz; j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Valores das somas das linhas : \n");
    int valor_ant = vetor_linha[0];

    for ( i = 0; i <tam_matriz; i++){
        printf(" %d ",vetor_linha[i]);
        if(vetor_linha[i] == valor_ant){
            quadrado_magico++;
            valor_ant = vetor_linha[i];
        }
    }

    printf("\n");
    printf("\n");

    printf("Valores das somas das colunas : \n");
    valor_ant = vetor_coluna[0];

    for ( i = 0; i <tam_matriz; i++){
        printf(" %d ",vetor_coluna[i]);
        if(vetor_coluna[i] == valor_ant){
            quadrado_magico++;
            valor_ant = vetor_coluna[i];
        }
    }

    printf("\n");
    printf("\n");

    printf("Valores das somas das diagonais : \n");
    valor_ant = vetor_diagonal[0];

    for ( i = 0; i < 2; i++) {
        printf(" %d ",vetor_diagonal[i]);
        if(vetor_diagonal[i] == valor_ant){
            quadrado_magico++;
            valor_ant = vetor_diagonal[i];
        }
    }

    printf("\n");
    printf("\n");

    if (quadrado_magico >= 8){
        printf("A matriz eh um quadrado magico");
    } else {
        printf("A matriz nao eh um quadrado magico");
    }
}



