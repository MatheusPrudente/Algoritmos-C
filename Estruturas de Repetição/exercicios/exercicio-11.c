/*
    Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de
    trigo  da  seguinte  maneira:  os  grãos  de  trigo  devem  ser  dispostos
    em  um  tabuleiro  de xadrez,  de  tal  forma  que  a  primeira  casa  do  tabuleiro
    tivesse  um  grão,  e  as  casas seguintes  o  dobro  da  anterior.  Faça  um  programa
    que  calcule  quantos  grãos  de  trigo  a Rainha deverá pagar ao monge
*/


#include "stdio.h"


void main() {
    long int grao = 1;
    int i = 1;

    while(i <= 64 ){
        printf("\nNo quadro %d tem %ld grao(s)\n",i,grao);
        grao = grao *2;
        i++;
    }
}
