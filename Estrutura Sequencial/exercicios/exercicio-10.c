/*
    Faça  um programa que  receba  o  ano  de  nascimento  de  uma  pessoa  e 
    o  ano  atual, calcule e mostre: a idade dessa pessoa e quanto anos essa
    pessoa terá em 2030.
*/

#include "stdio.h"

void main () {
    int ano_atual;
    int ano_nascimento;
    int idade_futura;
    int idade_atual;

    printf(" Digite o ano de nascimento da pessoa\n" );
    scanf ("%d", &ano_nascimento);
    printf(" Digite o ano atual\n" );
    scanf ("%d", &ano_atual);

    idade_atual = ano_atual - ano_nascimento;
    idade_futura = 2030 - ano_nascimento;

    printf(" A idade desta pessoa eh aproximadamente
    de %d anos \n ",idade_atual);
    printf(" A idade desta pessoa em 2032 eh aproximadamente
    de %d anos \n ",idade_futura);
}
