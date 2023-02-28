/*
    Escreva  um  algoritmo que  determine  o  fatorial  de  um  número.  Para  este  problema,
    tem-se como entrada o valor do número do qual se deseja calcular o fatorial. O fatorial
    de 0 é igual a 1. O fatorial de um número n(ou seja, n!) é definido conforme a seguir:
*/

#include "stdio.h"

void main() {
    int numero;
    int i = 1;
    int j = 1;
    int fatorial= 1;
    int numero_atual = 1;

    printf ("\nInforme o numero fatorial (n!)\n");
    scanf ("%d",&numero);

    while (i<=numero) {
        if(numero > 0){
            fatorial  = fatorial * numero_atual;
            printf ("\n%d\n",fatorial);
            numero_atual++;
            i++;
        } else {
            printf ("\nO fatorial de 0 é igual a 1\n");
        }
    }
}
