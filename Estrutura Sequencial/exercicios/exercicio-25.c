/*
    Faça  um  programa  que  receba  um  valor  em  reais,
    calcule  e  mostre  este  valor  em dólares, euros, libras e pesos argentinos.
    Considere as cotações do dia
*/

#include "stdio.h"

void main () {
    float real;
    float dolar;
    float euro;
    float libra;
    float peso;

    printf("Digite o valor em reais\n");
    scanf("%f",&real);
    dolar = real/4.8128;
    euro = real/5.3618;
    libra = real/5.9937;
    peso = real/0.0773;

    printf("%.2f real ( ou reais) equivalem a %.2f dolar(es)\n",real,dolar);
    printf("%.2f real ( ou reais) equivalem a %.2f euro(s)\n",real,euro);
    printf("%.2f real ( ou reais) equivalem a %.2f libra(s)\n",real,libra);
    printf("%.2f real ( ou reais) equivalem a %.2f peso(s) argentino(s)\n",real,peso);
}