/*
    Altere o programa anterior permitindo ao usuário informar as populações e as
    taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
*/

#include "stdio.h"


int main() {
    int i5 =0;
    int i1= 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int populacaoA = 0 ;
    int populacaoB = 0 ;
    float  taxaA = 0;
    float taxaB = 0;
    int ano = 0;


    while (i1 < 1) {
        printf ("Informe a populacao do pais A :\n");
        scanf ("%d",&populacaoA);

        if(populacaoA <=0){
            printf ("Informe um valor maior que zero\n");
        } else {
            i1++;
        }
    }


    while (i2 < 1) {
        printf ("Informe a taxa de crescimento do pais A :\n");
        scanf ("%f",&taxaA);

        if(taxaA <= 0){
            printf ("\nInforme um valor maior que zero\n");
        } else {
            i2++;
        }
    }


    while (i3 < 1){
        printf ("Informe a populacao do pais B :\n");
        scanf ("%d",&populacaoB);


        if(populacaoB <=0){
            printf ("\nInforme um valor maior que zero\n");
        } else {
            i3++;
        }
    }

    while (i4 < 1){
        printf ("Informe a taxa de crescimento do pais B :\n");
        scanf ("%f",&taxaB);

        if(taxaB <= 0) {
            printf ("\nInforme um valor maior que zero\n");
        } else {
            i4++;
        }
    }


    while (i5 < 1) {
        if( populacaoA  < populacaoB){
            printf ("\nA população do pais A no ano %d eh de %d habitantes\n",ano,populacaoA);
            printf ("A população do pais B no ano %d eh de %d habitantes\n",ano,populacaoB);
        } else if (populacaoA >= populacaoB){
            printf ("\nA população do pais A no ano %d eh de %d habitantes\n",ano,populacaoA);
            printf ("A população do pais B no ano %d eh de %d habitantes\n",ano,populacaoB);
            printf("\nForam necessaios %d anos para a populacao\ndo pais A se igualar com o do pais B",ano);
            i5++;
        }

        populacaoA = populacaoA + (populacaoA*taxaA/100);
        populacaoB = populacaoB + (populacaoB*taxaB/100);
        ano++;
    }
}
