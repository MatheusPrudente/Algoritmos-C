/*
    Faça  um programa que  calcule a média 
    harmônica de  três  valores dada pela 
    fórmula (a, b e c representam os valores):
*/
#include "stdio.h"


int main () {
    float a;
    float b;
    float c;
    float conta;

    printf("Digite o primeiro numero\n");
    scanf("%f",&a);
    printf("Digite o segundo numero\n");
    scanf("%f",&b);
    printf("Digite o terceiro numero\n");
    scanf("%f",&c);
    conta = 3/(1/a+1/b+1/b);

    printf("A media harmonica entre %.1f, %.1f, %.1f eh %.1f",a,b,c,conta);
}
