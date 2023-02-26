/*Fa�a um programa que use uma fun��o para identificar se um n�mero � primo.
O programa dever� receber do usu�rio o n�mero que se deseja verificar e
usar a fun��o que ir� realizar a verifica��o. Um n�mero � primo quando ele � divis�vel apenas por um e por ele mesmo.

*/

#include "stdio.h"

void verificarPrimo(int num){
    int i, resultado = 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            resultado++;
            break;
        }
    }
    printf("\n\n------ Resultado --------\n\n");

    if (resultado == 0){
        printf("O numero %d eh um numero primo\n", num);
    } else if (resultado > 0){
        printf("O numero %d nao eh um numero primo\n", num);
    } else {
        printf("O numero 0 e 1 nao sao primos");
    }

}

void main() {
    printf("------ Numeros Primos --------\n\n");
    int num;
    printf("Informe o valor : ");
    scanf("%d", &num);

    verificarPrimo(num);
}