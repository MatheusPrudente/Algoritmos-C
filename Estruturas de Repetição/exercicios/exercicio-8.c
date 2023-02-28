/*
    Faça um programa que  o  usuário  entre  com  vários  números  inteiros  e  positivos
    e imprima  o  produto  dos  números  ímpares  e  a  soma  dos  números  pares entre
    estes números digitados pelo usuário
*/

#include "stdio.h"


void main() {
    int num;
    int soma_par = 0;
    int produto_impar = 1;
    int i = 0;
    char res;

    while (i < 1) {
        printf("\nDigite um numero inteiros  e  positivos \n");
        scanf("%d",&num);

        if(num%2 == 0){
            soma_par = soma_par + num;
        } else {
            produto_impar = produto_impar * num;
        }

        printf("\n\nDeseja colocar mais numeros ? (\'s\' para sim \ne \'n\' para nao)\n");
        scanf("%s",&res);

        if(res == 'n'){
            i++;
        }
    }
    printf(" O produto  dos  números  ímpares eh %d\n e  a  soma  dos  números  pares eh %d\n",produto_impar,soma_par);
}
