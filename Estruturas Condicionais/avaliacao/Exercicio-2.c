/*Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

�lcool:
at� 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro
Gasolina:
at� 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro
Escreva um programa em C que leia o n�mero de litros vendidos, 
o tipo de combust�vel (codificado da seguinte forma: �A� para �lcool e �G� para gasolina), 
calcule e imprima o valor a ser pago 
pelo cliente sabendo-se que o pre�o do litro da gasolina � R$ 4,30 o pre�o do litro do �lcool � R$ 3,20.*/
#include "stdio.h"
#include "math.h"

void main() {
	
	float litro_vendido;
	char tipo;
	float valor_litro;
	float valor_total;
	float desconto;
	
	printf("Digite o tipo (\'A\' para alcool e \'G\' para gasolina)\n");
	scanf("%s",&tipo);
	
	printf("Digite quantos litros foram vendidos\n");
	scanf("%f",&litro_vendido);
	
	if(tipo == 'A') {
		if (litro_vendido <= 20) {
			valor_litro = litro_vendido * 3.20;
			desconto = litro_vendido * (3.20*3/100);
			valor_total = valor_litro - desconto;
			
			printf(" \n-----------------------------\n");
			printf("O desconto eh %.2f \n",desconto);
			printf(" \n-----------------------------\n");
			printf("O valor total sem desconto eh %.2f \n",valor_litro);
			printf("O valor total com desconto eh %.2f \n",valor_total);
		} else {
			valor_litro = litro_vendido * 3.20;
			desconto = litro_vendido * (3.20*5/100);
			valor_total = valor_litro - desconto;
			
			printf(" \n-----------------------------\n");
			printf("O desconto eh %.2f \n",desconto);
			printf(" \n-----------------------------\n");
			printf("O valor total sem desconto eh %.2f \n",valor_litro);
			printf("O valor total com desconto eh %.2f \n",valor_total);
		}
	}
	
	if(tipo == 'G'){
		if (litro_vendido <= 20){
			valor_litro = litro_vendido * 4.30;
			desconto = litro_vendido * (4.30*4/100);
			valor_total = valor_litro - desconto;
			
			printf(" \n-----------------------------\n");
			printf("O desconto eh %.2f \n",desconto);
			printf(" \n-----------------------------\n");
			printf("O valor total sem desconto eh %.2f \n",valor_litro);
			printf("O valor total com desconto eh %.2f \n",valor_total);
		
		} else {		
			valor_litro = litro_vendido * 4.30;
			desconto = litro_vendido * (4.30*6/100);
			valor_total = valor_litro - desconto;
			
			printf(" \n-----------------------------\n");
			printf("O desconto eh %.2f \n",desconto);
			printf(" \n-----------------------------\n");
			printf("O valor total sem desconto eh %.2f \n",valor_litro);
			printf("O valor total com desconto eh %.2f \n",valor_total);
		}
	}
}

