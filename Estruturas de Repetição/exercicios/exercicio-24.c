/*
    Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros termos da
    sequência de Fibonacci (0,  1, 1, 2, 3, 5, 8, ...). O valor lido para N sempre será
    maior ou igual a 2.
*/

#include "stdio.h"

void main() {
    int numero_atual = 1;
    int numero_anterior = 0;
    int numero_aux = 0;
    int resultado = 0;
    int i = 0;
    int fibonacci = 0;

    printf ("\nInforme quantos fibonacci (n!)\n");
    scanf ("%d",&fibonacci);

    if(fibonacci >= 2){
        printf ("\n1, ");
        while(i < fibonacci){
            resultado = numero_anterior + numero_atual;
            printf ("%d, ",resultado);
            numero_aux = numero_atual;
            numero_atual = resultado;
            numero_anterior = numero_aux;
            i++;
        }
    } else {
        printf ("\n1\n");
    }
}

