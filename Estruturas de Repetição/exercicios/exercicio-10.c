/*
    Faça Um programa que  leia  uma  quantidade  indeterminada  de  números  inteiros positivos
    e  identifique  qual  foi  o  maior  número  digitado.  O  final  da  série
    de  números digitada deve ser indicado pela entrada de -1.
*/


#include "stdio.h"


void main() {
    int num1;
    int num = 0;
    int i = 0;

    while(i < 1) {
        printf("\nDigite o numero (utilize -1 para sair)\n");
        scanf("%d",&num1);

        if(num1 > num){
        num = num1;
        }

        if(num1 < 0){
            i = 1000;
        }
    }
    printf("\nO maior numero digitado eh %d\n",num);
}
