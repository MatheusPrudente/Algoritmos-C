/*
    Fazer  um programa que  leia  um  número  inteiro  e  escreva
    o  seu  antecessor  e  o seu sucessor.
*/

#include "stdio.h"

int main () {
    int numero;
    int antecessor;
    int sucessor ;

    printf(" Escreva um numero inteiro para \n saber seu antecessor e sucessor : \n" );
    scanf ("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf(" O antecessor eh %d e o sucessor eh %d",antecessor,sucessor);
}
