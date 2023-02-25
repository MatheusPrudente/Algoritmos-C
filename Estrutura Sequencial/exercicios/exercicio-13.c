 /*
    Faça programa que receba o custo de um espetáculo teatral e o preço do convite deste espetáculo.
    Este programa deverá calcular e mostrar a quantidade de convites que
    devem ser vendidos para que pelo menos, o custo do espetáculo seja alcançado.
 */

#include "stdio.h"


void main () {
    float custo_evento;
    float valor_convite;
    float numero_venda;

    printf(" Digite custo do espetáculo teatral.\n" );
    scanf ("%f", &custo_evento);
    printf(" Digiteo preço do convite deste espetáculo.\n" );
    scanf ("%f", &valor_convite);
    numero_venda = custo_evento/valor_convite;
    printf("Serao necessarios vender %f convites para cobrir o custo do espetáculo\n",numero_venda);
}
