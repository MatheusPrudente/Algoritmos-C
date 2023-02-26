/*
    Faça um programa que receba a altura e o sexo de uma pessoa e
    que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas:
        Para homens: (72.7 * h) – 58;
        Para mulheres: (62.1 * h) – 44.7;
*/

#include "stdio.h"

void main() {
    float h;
    char sexo;
    float peso_ideal;

    printf("Digite a altura da pessoa (utilize ponto \nno lugar da virgula)\n");
    scanf("%f",&h);

    printf("Digite sexo da pessoa, utilizando \'F\' para femenino\n e \'M\' para masculino\n");
    scanf("%s",&sexo);

    if(sexo == 'M'){
        peso_ideal = (72.7 * h) - 58;
        printf("O peso ideal desta pessoa eh %.3f\n",peso_ideal);
    }

    if(sexo == 'F'){
        peso_ideal = (62.1 * h) - 44.7;
        printf("O peso ideal desta pessoa eh %.3f\n",peso_ideal);
    }
}
