/*
    Faça  um programa que  leia  dois  valores  para  as  variáveis  A  e  B
    e  efetue  a  troca  dos valores  de  forma  que  a  variável  A  passe
    a  possuir  o  valor  da  variável  B  e  a  variável  B passe a possuir
    o valor da variável A. Apresente os valores trocados.

*/

#include "stdio.h"


void main () {
    int a;
    int b;
    int c;

    printf(" Digite um valor inteiro para \" a \" \n" );
    scanf ("%d", &a);
    printf("Digite um valor inteiro para \" b \"  \n" );
    scanf ("%d", &b);
    c = a;
    a = b;
    b = c;

    printf(" O valor trocado de \"a\" eh %d\n",a);
    printf(" O valor trocado de \"b\" eh %d",b);
}
