/*Fa�a um programa em C que leia 2 n�meros e em seguida pergunte ao usu�rio qual opera��o ele deseja realizar 
(soma, subtra��o, multiplica��o ou divis�o). O resultado da opera��o deve ser exibido na tela, 
acompanhado de uma frase que diga se o n�mero �:

par ou �mpar; e
positivo ou negativo.*/

#include "stdio.h"
 
void main() {
	int num1,num2,resultado,operacao;

	printf("\nDigite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf(" \n----------------------------- ");
	printf("\n1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("\nQual operacao voce deseja : \n");
	scanf("%d",&operacao);
	
	
	if (operacao == 1) {
		resultado = num1 + num2;

		printf("----------------------------- \n");
		printf("  RESULTADO : \n\t");
		
		if (resultado % 2 == 0){
			printf("O numero %d eh par",resultado);
			
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		}
		
		else{
			printf("\tO numero %d eh impar\n",resultado);
			
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} 
			else {
				printf(" e neutro\n");
			}
		}
	} else if (operacao == 2){
		resultado = num1 - num2;
	
		printf("----------------------------- \n");
		printf("  RESULTADO : \n\t");
		
		if (resultado % 2 == 0){
			printf("O numero %d eh par",resultado);
			
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			}  else {
				printf(" e neutro\n");
			}
		} else{
			printf("\tO numero %d eh impar\n",resultado);
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		}
	} else if (operacao == 3){
		resultado = num1 * num2;
		
		printf("----------------------------- \n");
		printf("  RESULTADO : \n\t");
		
		if (resultado % 2 == 0){
			printf("O numero %d eh par",resultado);
			
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		} else{
			printf("\tO numero %d eh impar\n",resultado);
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		}
	} else if (operacao == 4){
		resultado = num1 / num2;
		
		printf("----------------------------- \n");
		printf("  RESULTADO : \n\t");
		
		if (resultado % 2 == 0){
			printf("O numero %d eh par",resultado);
			
			if (resultado > 0){
				printf(" e positivo\n");
			} else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		} else {
			printf("\tO numero %d eh impar\n",resultado);
		
			if (resultado > 0){
				printf(" e positivo\n");
			}  else if (resultado < 0) {
				printf(" e negativo\n");
			} else {
				printf(" e neutro\n");
			}
		}
	}else{
		printf("Operacao invalida");
	}
}