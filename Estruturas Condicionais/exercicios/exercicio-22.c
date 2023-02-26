/*
    Escreva  um programa que  receba  quatro  valores,  I,  A,  B  e  C.  I  é  um  valor  inteiro
    e positivo e A, B e C são valores reais. Escreva os números A, B e C obedecendo à tabela a seguir.
    Supor que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
*/

#include "stdio.h"

void main(){
    int I;
    float A;
    float B;
    float C;


    printf("\nDigite o primeiro numero (Sendo 1,2 ou 3)\n");
    scanf("%d",&I);
    printf("\nDigite o segundo numero\n");
    scanf("%f",&A);

    printf("\nDigite o terceiro numero\n");
    scanf("%f",&B);

    printf("\nDigite o quarto numero\n");
    scanf("%f",&C);

    if (I == 1) {
        if(A <= B && B<= C && A<C) {
            printf("%f %f %f",A,B,C);
        } else if(A <= C && C <= B && A<B) {
            printf("%f %f %f",A,C,B);
        } else if(B<= A && A <= C && B< C) {
            printf("%f %f %f",B,A,C);
        } else if(B<= C && C <= A && B < A) {
            printf("%f %f %f",B,C,A);
        } else if(C<= B && B<= A && C < A) {
            printf("%f %f %f",C,B,A);
        } else if(C<= A && A<= B && C < B) {
            printf("%f %f %f",C,B,A);
        }
    } else if (I == 2 ) {
        if(A <= B && B<= C && A<C) {
            printf("%f %f %f",C,B,A);
        } else if(A <= C && C <= B && A<B) {
            printf("%f %f %f",B,C,A);
        } else if(B<= A && A <= C && B< C) {
            printf("%f %f %f",C,A,B);
        } else if(B<= C && C <= A && B < A) {
            printf("%f %f %f",A,C,B);
        } else if(C<= B && B<= A && C < A) {
            printf("%f %f %f",A,B,C);
        } else if(C<= A && A<= B && C < B) {
            printf("%f %f %f",A,B,C);
        }
    } else if (I == 3) {
        if (A<C && B<C) {
            printf("%f %f %f",A,C,B);
        } else if (C<B && A<B) {
            printf("%f %f %f",A,B,C);
        } else if (C<A && B<A) {
            printf("%f %f %f",B,A,C);
        }
    } else {
        printf("Ocorreu um erro");
    }
}
