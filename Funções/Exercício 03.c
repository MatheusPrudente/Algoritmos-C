/*Faça um programa que solicite o total gasto pelo cliente de uma loja, 
imprima as opções de pagamento, 
solicite a opção desejada e imprime o valor total das prestações (se houverem).

Opção 1: A vista com 10% de desconto.
Opção 2: Em duas vezes (preço da etiqueta).
Opção 3: De 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
Faça uma função que imprime as opções, 
solicite a opção desejada e retorne a opção escolhida.
 No programa principal, teste a opção escolhida e ativar a função correspondente (uma função para cada opção).*/
 
#include "stdio.h"

int menuOpcao(float valor){
	
	int opcao = 0;
	
    
	printf("\n\n------ menu de opcao --------\n\n"); 
	
	printf("Opcao 1: pagamento a vista.\n");	
	printf("Opcao 2: pagamento em 2X\n");	

	
	if (valor > 100){
		printf("Opcao 3: pagamento em 3X ou mais\n");	
	}
	
	return opcao;
	

}
 
void aVista(float valor){
	
	valor = valor - (valor*10/100);
	printf("\nValor final : 1 X %.2f", valor);
    
}
 
void duasVezes(float valor){
	
	printf("\nValor final : 2 X %.2f",valor);
	
}

void tresVezesOuMais(float valor){
	
	int parcela = 0;
	int i ;
	
	printf("Informe o numero de parcelas : ");
	scanf("%d", &parcela);
	
	valor = valor+(valor*3/100);
	
	printf("\nValor final : %d X %.2f",parcela,valor/parcela);


}

void main(){
	
	float valor = 0;
	
	printf("------ Compras --------\n\n"); 
	
	printf("Informe o valor das compras: ");
	scanf("%f", &valor);
	
	int opcao = menuOpcao(valor);
	
	printf("\nInforme a opcao desejada : ");
	scanf("%d", &opcao);
	
	
	if (opcao == 1){
	
		aVista(valor);
		
	}
		else if(opcao == 2){
			
			duasVezes(valor);
			
		}
		else if(opcao == 3 && valor > 100){
			tresVezesOuMais(valor);
			
		}
			else {
				printf("Opcao invalida");
			}
} 
