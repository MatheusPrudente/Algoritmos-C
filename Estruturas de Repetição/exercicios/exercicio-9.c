/*
    Faça Um programa que receba a idade de N pessoas, calcule e mostre a porcentagem de
    pessoas com idade maior ou igual a 18 anos das quais foram digitadas.
*/


#include "stdio.h"


int main() {
    int idade;
    int contador_pessoa = 0;
    int contador_maior = 0;
    int porcentagem = 0;
    int i = 0;
    char res;

    while (i < 1) {
        printf("\nDigite a idade da pessoa\n");
        scanf("%d",&idade);

        contador_pessoa = contador_pessoa +1;

        if(idade >= 18){
            contador_maior = contador_maior +1;
        }

        printf("\n\nDeseja colocar idade de mais pessoas ? (\'s\' para sim \ne \'n\' para nao)\n");
        scanf("%s",&res);

        if(res == 'n'){
            i++;
        }
    }
    porcentagem = contador_maior*100/contador_pessoa;

    printf("\nA porcentagem de pessoas com idade maior ou igual\n a 18 anos das quais foram digitadas eh de %d\n",porcentagem);
}


