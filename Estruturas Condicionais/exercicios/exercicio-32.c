/*
    Um posto está vendendo combustíveis com a seguinte tabela de descontos:
        Álcool:
        até 20 litros, desconto de 3% por litro
        acima de 20 litros, desconto de 5% por litro

        Gasolina:
        até 20 litros, desconto de 4% por litro
        acima de 20 litros, desconto de 6% por litro

    Escreva  um programa que  leia  o  número  de  litros  vendidos,
    o  tipo  de  combustível (codificado  da  seguinte  forma: “A” para álcool e “G”
    para gasolina),  calcule  e  imprima  o valor a ser pago pelo cliente sabendo-se
    que o preço do litro da gasolina é R$ 4,30 o preço do litro do álcool é R$ 3,20.
*/

#include "stdio.h"
#include "math.h"


void main() {
    float litro_vendido;
    char tipo;
    float valor_litro;
    float valor_total;
    float desconto;

    printf("Digite o tipo (\'A\' para álcool e \'G\' para gasolina)\n");
    scanf("%s",&tipo);

    printf("Digite quantos litros foram vendidos\n");
    scanf("%f",&litro_vendido);


    if(tipo == 'A') {
        if (litro_vendido <= 20){
            valor_litro = litro_vendido * 3.20;
            desconto = litro_vendido * (3.20*3/100);
            valor_total = valor_litro - desconto;

            printf("O desconto eh %.2f \n",desconto);
            printf("O valor total sem desconto eh %.2f \n",valor_litro);
            printf("O valor total com desconto eh %.2f \n",valor_total);
        } else {
            valor_litro = litro_vendido * 3.20;
            desconto = litro_vendido * (3.20*5/100);
            valor_total = valor_litro - desconto;

            printf("O desconto eh %.2f \n",desconto);
            printf("O valor total sem desconto eh %.2f \n",valor_litro);
            printf("O valor total com desconto eh %.2f \n",valor_total);
        }
    }

    if(tipo == 'G'){
        if (litro_vendido <= 20) {

            valor_litro = litro_vendido * 4.30;
            desconto = litro_vendido * (4.30*4/100);
            valor_total = valor_litro - desconto;

            printf("O desconto eh %.2f \n",desconto);
            printf("O valor total sem desconto eh %.2f \n",valor_litro);
            printf("O valor total com desconto eh %.2f \n",valor_total);
        } else {
            valor_litro = litro_vendido * 4.30;
            desconto = litro_vendido * (4.30*6/100);
            valor_total = valor_litro - desconto;

            printf("O desconto eh %.2f \n",desconto);
            printf("O valor total sem desconto eh %.2f \n",valor_litro);
            printf("O valor total com desconto eh %.2f \n",valor_total);
        }
    }
}
