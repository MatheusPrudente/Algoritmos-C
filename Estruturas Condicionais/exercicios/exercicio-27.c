/*
    Com Base nas informações abaixo, faça um programa que, leia os valores de a, be c,
    resolva uma equação do 2º grau, e escreva os valores  de x1 e x2 para o usuário.
*/

#include "stdio.h"
#include "math.h"


void main() {
    int a;
    int b;
    int c;
    float delta;
    int x1;
    int x2;

    printf("Informe A\n");
    scanf("%d",&a);
    printf("Informe B\n");
    scanf("%d",&b);
    printf("Informe C\n");
    scanf("%d",&c);

    delta = (b*b)-4*a*c;

    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %d\n",x1);
        printf("x2 = %d\n",x2);
    } else {
        printf("Nao ha raiz\n");
    }
}
