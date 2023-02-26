/*
    A   nota   final   de   um   estudante   é   calculada   a   partir   de   três   notas
    atribuídas respectivamente  a  um  trabalho  de  laboratório,  a  uma  avaliação  semestral
    e  a  um  exame final. A média das três notas mencionadas anteriormente obedece aos pesos
    da tabela a seguir.  Escreva  um programa que  receba  as  três  notas,  calcule  e  mostre
    a  média ponderada e o conceito que segue a tabela abaixo.
 */

#include "stdio.h"

void main() {
    float media;
    float nota1;
    float nota2;
    float nota3;
    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;

    printf("\nDigite a nota do trabalho no laboratorio\n");
    scanf("%f",&nota1);

    printf("\nDigite a nota da avaliacao semestral\n");
    scanf("%f",&nota2);

    printf("\nDigite a nota do Exame final\n");
    scanf("%f",&nota3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 *peso3)/(peso1+ peso2 + peso3);

    if (media >= 8 && media <=10) {
        printf("Conceito A");
    } else if (media >= 7 && media <8) {
        printf("Conceito B");
    } else if (media >= 6 && media <7) {
        printf("Conceito C");
    } else if (media >= 5 && media <6) {
        printf("Conceito D");
    } else {
        printf("Conceito E");
    }
}
