/*
    Faça  um  programa que  imprima a  tabela  de  equivalência  de  graus  Fahrenheit
    para Celsius. Os limites são de 50 a 70 graus
    Fahrenheit com intervalo de 1 grau.Fórmula: C = 5/9 (F -32).
*/

#include "stdio.h"

void main() {
    float fahrenheit = 50;
    float celsius;

    printf("\nTabela de conversao aproximada \n\n");
    printf("fahrenheit | celsius\n\n");

    while (fahrenheit <= 70) {
        celsius = (fahrenheit-32)*5/9;
        printf("     %.2f | %.2f\n",fahrenheit,celsius);
        fahrenheit++;
    }
}
