/*
    Faça  um programa  que  receba  o  ano  de  nascimento  de  uma  pessoa  e  o  ano  atual,
    calcule e mostre a idade dessa pessoa em:
        a) Anos;
        b) Meses;
        c) Dias;
        d) Semanas.
*/

#include "stdio.h"


void main () {
    int ano_atual;
    int ano_nascimento;
    int ano;
    int mes;
    int semana;
    int dia;

    printf(" Digite o ano de nascimento da pessoa\n" );
    scanf ("%d", &ano_nascimento);
    printf(" Digite o ano atual\n" );
    scanf ("%d", &ano_atual);
    ano = ano_atual - ano_nascimento;
    mes = ano*12;
    semana = mes*4.348;
    dia = semana*7;

    printf(" A idade desta pessoa eh aproximadamente de %d anos \n ",ano);
    printf(" A idade desta pessoa eh aproximadamente de %d mes(es) \n ",mes);
    printf(" A idade desta pessoa eh aproximadamente de %d semana(s) \n ",semana);
    printf(" A idade desta pessoa eh aproximadamente de %d dia(s) \n ",dia);
}
