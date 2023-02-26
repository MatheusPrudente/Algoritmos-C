/*
    Faça um programa que receba dois números e execute uma das operações listadas a
    seguir  de  acordo  com  a  escolha  do  usuário.  Se  for  digitada  uma  opção
    inválida  mostrar mensagem de erro e terminar a execução do programa. As opções são:
        1. Média entre os dois número.
        2. Diferença do maior pelo menor.
        3. O produto entre os dois números.
*/

#include "stdio.h"

void main() {
    int numero1;
    int numero2;
    float resultado;
    int operacao;

    printf("\nDigite o primeiro numero\n");
    scanf("%d",&numero1);

    printf("\nDigite o segundo numero\n");
    scanf("%d",&numero2);

    printf("Digite o numero da operacao desejada\n\n1. Media entre os dois numero \n2. Diferenca do maior pelo menor.\n3. O produto entre os dois numeros.\n\n Operacao :");
    scanf("%d",&operacao);

    if (operacao <= 3 && operacao != 0 ) {
        if(operacao == 1) {
            resultado = (numero1 + numero2) / 2;
            printf("\n Media entre os dois numero eh %.2f\n",resultado);
        } else if(operacao == 2){
            if(numero1 > numero2){
                resultado = numero1 - numero2;
                printf("\n Diferenca do maior pelo menor eh %.2f\n",resultado);
            } else {
                resultado = numero2 - numero1;
                printf("\n MDiferenca do maior pelo menor eh  %.2f\n",resultado);
            }
        } else { resultado = numero1 * numero2;
            printf("\n O produto entre os dois numeros eh %.2f\n",resultado);
        }
    } else {
        printf("\noperacao invalida\n");
    }
}
