/*Uma pequena loja de artesanato possui apenas
 um vendedor e comercializa dez tipos de objetos. 
O vendedor recebe, mensalmente, salário de R$ 545,00, 
acrescido de 5% do valor total de suas vendas.
O valor unitário dos objetos deve ser informado e armazenado em um vetor;
a quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição. 
Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez). 
  Depois, determine e mostre:

um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. 
Ao final, deverão ser mostrados o valor geral das vendas e o valor da comissão que será para ao vendedor;
 e
o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).*/

#include "stdio.h"
 
void main ( ){
 
float salario = 545.00;
float preco[10];
float valorGeral = 0;
int qtdProduto [10];
float comissao = 0.5;
int maisVendido = 0;
float maiorPreco = 0;
int posicao;
int i;

printf("\t-------- Vendas ---------\n\n" );

for( i = 0; i <10;i++){

	printf("\tInforme o valor [%d] : ",i+1);
	scanf("%f",&preco[i]);
	printf("\tInforme a quatidade [%d] : ",i+1);
	scanf("%d",&qtdProduto[i]);
	printf("\n");
	
}

printf("\n    ------ Relatorio ------\n\n" );
 
for( i = 0; i<10;i++){
	printf("\n    ------ Produto %d ------\n\n",i+1 );
	printf("\n\tQuatidade vendida : %d \n",qtdProduto[i]);
	printf("\tValor unitario : %.2f \n",preco[i]);
	printf("\tValor total : %.2f  \n",qtdProduto[i]*preco[i]);
	printf("\n");
 
	valorGeral = valorGeral + (qtdProduto[i]*preco[i]);
 
	if(qtdProduto[i] > maisVendido){
	 posicao = i;
	 maisVendido = qtdProduto[i];
	 maiorPreco = preco[i];
	}
	
}
 
 
printf("\n\tProduto na posicao [%d] foi o mais vendido,\ncom o valor [%.2f] e quatidade vendida [%d]\n\n",posicao + 1,maiorPreco,maisVendido);
printf("\tValor geral das vendas: %.2f\n",valorGeral);
printf("\tValor comissao: %.2f\n", valorGeral * comissao);
printf("\tSalario vendedor : %.2f", salario + (valorGeral*comissao));
}
 

