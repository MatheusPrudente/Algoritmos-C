/*
    Sabe-se que:
        pé = 12 polegadas
        1 jarda = 3 pés
        1 milha = 1,760 jardas

    Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre
    os resultados.

        a)Polegadas;
        b) Jardas;
        c) Milhas.
*/

#include "stdio.h"

void main () {
    float pe;
    float polegada;
    float jarda ;
    float milha  ;

    printf(" Digite o valor da medida em pes.\n" );
    scanf ("%f", &pe);
    polegada = pe*12;
    jarda = pe/3;
    milha = jarda/1.760;


    printf("A medida de %f pe(s) equivalem a %f polegada(s)\n",pe,polegada);
    printf("A medida de %f pe(s) equivalem a %f jarda(s)\n",pe,jarda);
    printf("A medida de %f pe(s) equivalem a %f milha(s)\n",pe,milha);
}
