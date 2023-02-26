/*
    Faça  um
    Programa  que  peça  uma  data  no  formato  dd/mm/aaaa  e  determine  se  a mesma é uma data válida.
*/

#include "stdio.h"

void main(){
    int dia;
    int mes;
    int ano;

    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano >= 1900 && ano <= 9999) {
        if (mes >= 1 && mes <= 12){
            if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
                printf("data válida.\n");
            } else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 ||mes == 9 || mes == 11)){
                printf("data válida.\n");
            } else if ((dia >= 1 && dia <= 28) && (mes == 2)){
                printf("data válida.\n");
            } else if (dia == 29 && mes == 2 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))){
                printf("data válida.\n");
            } else{
                printf("Dia invalido.\n");
            }
        } else {
            printf("Mes invalido.\n");
        }
    } else{
        printf("Ano invalido.\n");
    }
}
