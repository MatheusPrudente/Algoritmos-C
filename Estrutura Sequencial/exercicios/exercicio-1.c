/*
    Faça um programa que receba o preço de um produto, calcule e mostre o novo preço,
    sabendo - se que este sofreu um desconto de 10%.
*/

#include "stdio.h"

void main () {
    float preco;
    float novo_preco;

    printf(" Digite o preço do produto \n ");
    scanf("%f",&preco);
    novo_preco = (preco*10/100) + preco;

    printf(" O preço do produto depois de receber desconto de 10 por cento eh :%.2f ",novo_preco)
}
