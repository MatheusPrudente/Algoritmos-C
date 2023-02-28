/*
    Faça um programa que leia o número de termos e um valor positivo para X.
*/

#include "stdio.h"
#include "math.h"

void main() {
    int numero;
    int i = 1;
    int j = 1;
    float fatorial= 1;
    float s = 1;

    printf ("\nInforme o numero fatorial mmaior que 1(n!)\n");
    scanf ("%d",&numero);

    if(numero >= 2) {
        while (i<=numero) {
            while (j<=i) {
                fatorial=fatorial*j;
                j++;
            }

            printf("%d %d %f\n", numero,i,fatorial);
            s=s+(pow(numero, i+1)/fatorial);
            i++;
        }
    }
    printf ("\n%f",s);
}
