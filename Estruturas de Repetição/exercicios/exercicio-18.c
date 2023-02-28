/*
    Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
    centímetros  por  ano. Faça  um  programa  que  calcule  e imprima quantos  anos
    serão necessários para que Juca seja maior que Chico.
*/

#include "stdio.h"

void main() {
    int i;
    float altura_chico = 1.50 ;
    float altura_juca = 1.10 ;
    float taxa_chico = 2;
    float taxa_juca = 3;
    int ano = 0;

    while (i < 1) {
        if( altura_juca  < altura_chico) {
            printf ("\nNo ano %d a altura de Chico eh %.2f m \n",ano,altura_chico);
            printf ("No ano %d eh a altura de Juca eh %.2f m \n",ano,altura_juca);
        } else if (altura_juca > altura_chico) {
            printf ("\nNo ano %d a altura de Chico eh %.2f \n m",ano,altura_chico);
            printf ("No ano %d eh a altura de Juca eh %.2f \n m",ano,altura_juca);
            printf("\nForam necessaios %d anos para Juca\nficar maior que Chico",ano);
            i++;
        }

        altura_chico = altura_chico + (altura_chico*taxa_chico/100);
        altura_juca = altura_juca + (altura_juca*taxa_juca/100);
        ano++;
    }
}
