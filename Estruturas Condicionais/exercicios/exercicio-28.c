/*
    Faça um programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas,
    dezenas e unidades do mesmo.Observando os termos no plural a colocação do "e", da vírgula entre outros.
    Exemplos:

    326 = 3 centenas, 2 dezenas e 6 unidades
    12 = 1 dezena e 2 unidades

    Teste Com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16.
*/

#include "stdio.h"


void main() {
    // unidade, dezena,centena e mil
    int numero;
    int numero_aux;
    int unidade;
    int dezena;
    int centena;
    int mil;

    printf("Digite um numero ate 1000\n");
    scanf("%d",&numero);

    numero_aux = numero;

    mil = numero/1000;
    numero = numero - (1000*mil);

    centena = numero/100;
    numero = numero - (100*centena);

    dezena = numero/10;
    numero = numero - (10*dezena);

    unidade = numero/1;
    numero = numero - (1*unidade);

    printf("\n%d : ",numero_aux);

    if (mil > 0) {
        if (mil == 1) {
            printf("%d mil",mil);
        }
    }

    if (centena > 0) {
        if (centena == 1) {
            printf("%d centena ",centena);
        } else {
            printf("%d centenas ",centena);
        }
    }

    if (dezena > 0) {
        if (dezena == 1){
            printf("%d dezena ",dezena);


        } else {
            printf("%d dezenas ",dezena);
        }
    }

    if (unidade > 0){
        if (unidade == 1){
            printf("%d unidade ",unidade);
        } else {
            printf("%d unidades ",unidade);
        }
    }
}
