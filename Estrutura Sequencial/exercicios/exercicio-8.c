/*
    Faça  um programa que  leia  uma  temperatura  em  graus  Celsius
    e  apresente-a convertida em graus Fahrenheit. A fórmula de conversão é:
    F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;
*/

#include "stdio.h"


void main () {
    int celsius ;
    int fahrenheit;

    printf(" Digite a temperatura em celsius \n" );
    scanf ("%d", &celsius);
    fahrenheit  = (9 * celsius + 160) / 5;
    printf("A temperatura de %d Celsius equivalem a %d fahrenheit ",celsius,fahrenheit );
}
