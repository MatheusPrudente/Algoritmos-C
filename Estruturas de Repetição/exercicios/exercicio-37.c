/*
    Faça  um programa  que  peça  um  número  inteiro  positivo  e  em  seguida  mostre
    este número invertido
*/

#include "stdio.h"


void main() {
    int numero = 0;
    int inverso= 0;

    scanf("%d",&numero);

    while(numero> 0) {
        int numero_aux = numero%10;
        inverso = (inverso*10)+ numero_aux;
        numero= numero /10;
    }
    printf("%d\n",inverso);
}
