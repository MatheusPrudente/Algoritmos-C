/*
    Faça um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5.
*/

#include "stdio.h"


void main() {
    int num = 1000;
    int i = 0;

    while (i < 5){
        if(num%11 == 5){
            i++;
            if(i == 5){
                printf(" o quinto número maior que 1000, cuja divisão por 11\n tenha resto 5 eh %d\n",num);
            }
        }
        num++;
    }
}