/*
     Faça  um  programa  que  receba  dois  números  inteiros  e  gere  os  números
     inteiros  que estão no intervalo compreendido por eles.
*/

#include "stdio.h"

void main() {
    int num1;
    int num2;
    int num_maior;
    int num_menor;
    int num = 0;
    int i = 0;

    printf("\nDigite um valor inteiro\n");
    scanf("%d",&num1);

    printf("\nDigite um valor inteiro\n");
    scanf("%d",&num2);

    if(num1 > num2){
        num_maior = num1;
        num_menor = num2;
    } else {
        num_maior = num2;
        num_menor = num1;
    }

    printf("\nEntre os numeros %d e %d estao os numeros : \n",num_menor,num_maior);

    num = num_menor +1;
    while (i < 1){
        if (num_menor < num && num < num_maior){
            printf("\n%d",num);
        } else {
            i++;
        }
        num ++;
    }
}
