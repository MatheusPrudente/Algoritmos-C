/*
    Faça  um programa  que  peça  um  número  e  então  mostre uma
    mensagem contendo  o número digitado.
*/

#include "stdio.h"

void main () {
    int numero;
    
    printf ( " Digite um numero:  ");
    scanf("%d", &numero);
    printf (" O numero digitado foi %d",numero);
}
