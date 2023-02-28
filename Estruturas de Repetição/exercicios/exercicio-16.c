/*
    Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa  anual
    de  crescimento  de  3%  e  que  a  população  de  B  seja  200000  habitantes
    com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o
    número de anos  necessários  para  que  a  população  do país  A  ultrapasse
    ou  iguale  a  população  do país B, mantidas as taxas de crescimento.
*/


#include "stdio.h"

void main() {
    int i;
    int populacaoA = 80000 ;
    int populacaoB = 200000 ;
    int taxaA = 3;
    float taxaB = 1.5;
    int ano = 0;

    while (i < 1){
        if( populacaoA  < populacaoB){
            printf ("\nA população do pais A no ano %d eh de %d habitantes\n",ano,populacaoA);
            printf ("A população do pais B no ano %d eh de %d habitantes\n",ano,populacaoB);
        } else if (populacaoA >= populacaoB){
            printf ("\nA população do pais A no ano %d eh de %d habitantes\n",ano,populacaoA);
            printf ("A população do pais B no ano %d eh de %d habitantes\n",ano,populacaoB);
            printf("\nForam necessaios %d anos para a populacao\ndo pais A se igualar com o do pais B",ano);
            i++;
        }

        populacaoA = populacaoA + (populacaoA*taxaA/100);
        populacaoB = populacaoB + (populacaoB*taxaB/100);

        ano++;
    }
}