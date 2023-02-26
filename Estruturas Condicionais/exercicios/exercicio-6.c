/*
    Faça  um programa  que  pergunte  em  que  turno  você
    estuda(“M” para matutino  ou “V” para vespertino ou “N” para noturno) e
    imprima a mensagem "Bom Dia!",
    "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme cada caso.
*/

#include "stdio.h"


void main() {
    char turno;

    printf(" Que  turno  você  estuda ?(“M” para matutino  ou “V” para \nvespertino ou “N” para noturno)\n");
    scanf("%s",&turno);

    if(turno == 'M'){
        printf("Bom Dia!");
    } else if(turno == 'V'){
        printf("Boa Tarde!");
    } else if(turno == 'N'){
        printf("Boa Noite!");
    } else{
        printf("Valor Inválido!");
    }
}
