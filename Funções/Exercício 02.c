/*Faça um programa que use uma função para identificar se um número é primo. 
O programa deverá receber do usuário o número que se deseja verificar e 
usar a função que irá realizar a verificação. Um número é primo quando ele é divisível apenas por um e por ele mesmo.

*/

#include "stdio.h"
void verificarPrimo(int num){
	
	int i, resultado = 0;
	
	for (i = 2; i < num; i++) {
	 
	   if (num % i == 0) {
	      resultado++;
	      break;
	   }
	}
	printf("\n\n------ Resultado --------\n\n"); 
	
	if (resultado == 0){   
		 printf("O numero %d eh um numero primo\n", num);
	}
	
		else if (resultado > 0){  
			printf("O numero %d nao eh um numero primo\n", num);
		}
	 
			else {
				printf("O numero 0 e 1 nao sao primos");
			}
	
}

void main() {
	
	printf("------ Numeros Primos --------\n\n"); 
	int num;
	printf("Informe o valor : ");
	scanf("%d", &num);
	
	verificarPrimo(num);

}
 

