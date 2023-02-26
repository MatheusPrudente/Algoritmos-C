/*
Faça  um  Programa  que  leia  2  números  e  em  seguida  pergunte  ao  usuário
qual operação  ele  deseja  realizar.  O  resultado  da  operação  deve  ser
acompanhado  de  uma frase que diga se o número é:
    par ou ímpar;
    positivo ou negativo;
    e inteiro ou decimal.
*/

#include "stdio.h"
#include "math.h"


void main() {
    int num1,num2,resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    printf("Qual operacao voce deseja? (+, -, *, /): ");
    scanf("%c",&operacao);


    if (operacao == '+') {
        resultado = num1 + num2;

        if (resultado % 2 == 0) {
            printf("O numero %d eh par\n",resultado);
        } else{
            printf("O numero %d eh impar\n",resultado);
        }

        if (resultado >= 0) {
            printf("O numero %d e positivo\n",resultado);
        } else{
            printf("O numero %d e negativo\n",resultado);
        }

        if (round(resultado) == resultado) {
            printf("O numero %d e inteiro!",resultado);
        } else{
            printf("O numero %d eh decimal\n",resultado);
        }
    } else if (operacao == '-') {
        resultado = num1 - num2;

        if (resultado % 2 == 0) {
            printf("O numero %d eh par\n",resultado);
        } else {
            printf("O numero %d eh impar\n",resultado);
        }

        if (resultado >= 0) {
            printf("O numero %d e positivo\n",resultado);
        } else {
            printf("O numero %d e negativo\n",resultado);
        }

        if (round(resultado) == resultado) {
            printf("O numero %d e inteiro!",resultado);
        } else {
            printf("O numero %d eh decimal\n",resultado);
        }
    } else if (operacao == '*') {
        resultado = num1 * num2;

        if (resultado % 2 == 0) {
            printf("O numero %d eh par\n",resultado);
        } else {
        printf("O numero %d eh impar\n",resultado);
        }
        if (resultado >= 0){
            printf("O numero %d e positivo\n",resultado);
        } else{
            printf("O numero %d e negativo\n",resultado);
        }

        if (round(resultado) == resultado){
            printf("O numero %d e inteiro!",resultado);
        } else{
            printf("O numero %d eh decimal\n",resultado);
        }
    } else if (operacao == '/') {
        resultado = num1 / num2;

        if (resultado % 2 == 0) {
            printf("O numero %d eh par\n",resultado);
        } else{
            printf("O numero %d eh impar\n",resultado);
        }

        if (resultado >= 0) {
            printf("O numero %d e positivo\n",resultado);
        } else{
            printf("O numero %d e negativo\n",resultado);
        }

        if (round(resultado) == resultado) {
            printf("O numero %d e inteiro!",resultado);
        } else {
            printf("O numero %d eh decimal\n",resultado);
        }
    } else{
        printf("Operacao invalida");
    }
}