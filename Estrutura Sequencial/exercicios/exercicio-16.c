/* 
    Faça um programa que peça 2 números inteiros e um
    número real. Calcule e mostre:

    a) O produto do dobro do primeiro com metade do segundo; e
    b) A soma do triplo do primeiro com o terceiro.
*/

#include "stdio.h"


int main () {
    int n1;
    int n2;
    float n3;
    int conta1;
    float conta2;

    printf("Digite um valor inteiro para o primeiro numero\n");
    scanf("%d",&n1);
    printf("Digite um valor inteiro para o segundo numero\n");
    scanf("%d",&n2);
    printf("Digite um valor real para o terceiro numero\n");
    scanf("%f",&n3);
    conta1 = (2*n1) * (n2/2);
    conta2 = (3*n1) + n3;

    printf("O resultado do produto do dobro do primeiro com metade do segundo e a soma do triplo do primeiro com o terceiro eh respectivamente,%d e %f\n",conta1,conta2);
}
