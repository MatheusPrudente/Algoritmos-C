/*Fa�a um programa que receba uma palavra e verifique se ela constitui um pal�ndromo,
 ou seja, se a palavra escrita do fim para o come�o fica igual � palavra escrita do come�o para o fim.

Exemplos:

ARARA

ANA

MIRIM
*/

# include "stdio.h"
# include "string.h"


void main () {
    char palavra1[20];
    char palavra2[20];

    printf("Informe um palavra :  ");
    gets(palavra1);

    int j = 0;
    int i = 0;

    for( i = strlen(palavra1)-1; i>=0 ;i--) {
        palavra2[j] = palavra1[i];
        j++;
    }

    // Finaliza String
    palavra2[j] = '\0';

    int res = strcmp(palavra1, palavra2);

    if (res == 0){
        printf("\n\n------ Resultado --------\n\n");
        printf("Palavra : %s\n",palavra1);
        printf("Palavra invertida : %s\n",palavra2);

        printf("Resultado : Eh um palindromo");
     } else {
        printf("\n\n------ Resultado --------\n\n");
        printf("Palavra : %s\n",palavra1);
        printf("Palavra invertida : %s\n",palavra2);

        printf(" Resultado : Nao eh um palindromo");
    }
}