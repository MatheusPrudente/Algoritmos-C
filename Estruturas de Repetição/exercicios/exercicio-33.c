/*
    Faça  um programa  que  receba  o  valor  de  uma  dívida  e  mostre  uma  tabela
    com  os seguintes  dados:  valor  da  dívida,  valor  dos  juros,  quantidade  de
    parcelas  e  valor  da parcela
*/

#include "stdio.h"

void main() {
    float valor_divida,valor_parcela,i,juro;

    int i_aux,juro_aux;
    i = 1;
    i_aux = 0;
    juro = 0;
    juro_aux = 5;
    valor_divida = 0;
    valor_parcela = 0;

    printf(" Informe o valor da divida\n");
    scanf("%f",&valor_divida);

    printf("  valor   |   valor   | quantidade  |    valor\n");
    printf("da dívida | dos juros | de parcelas | da parcela\n");

    valor_parcela = valor_divida;

    while (i < 13){
        printf("    %.2f       %.1f       %.1f            %.2f\n",valor_divida,juro,i,valor_parcela);
        i = i_aux + 3;
        i_aux = i;
        juro = juro_aux +5;
        juro_aux = juro;
        valor_parcela = (valor_divida /i) + juro;
    }
}
