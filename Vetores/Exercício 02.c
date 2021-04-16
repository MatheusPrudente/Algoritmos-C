/*Faça um programa que leia dois vetores de 10 elementos. 
O programa deve criar um vetor que seja a intersecção entre os 2 vetores anteriores, 
ou seja, que contém apenas os números que aparecem nos dois vetores.*/
#include "stdio.h"
 
int main(){
int vetorA [10];
int vetorB [20];
int vetorAB[10] ;
int i;
int x;
int j;
int a;
int tam;

printf("---------- Vetor 1 ----------\n\n");

for(i = 0; i<10;i++){
	printf("Informe o valor [%d] : ",i+1);
	scanf("%d",&vetorA[i]);
 
 
}
 
printf("\n---------- Vetor 2 ----------\n\n");

for( j = 0; j<10;j++){
	printf("Informe o valor [%d] : ",j+1);
	scanf("%d",&vetorB[j]);
}
 
 
for (x = 0; x<10;x++){
	for (a = 0; a <10;a++){
	   int num_atual = vetorA[a];
	 
	  if (vetorA[a] == vetorB[x]){
	           vetorAB[tam] = vetorA[a];
	           tam++;
	   }
	}
}
 
 printf("\n---------- Numeros em comum ----------\n\n");

 
for (i = 0; i < tam; i++ ){
  printf(" %d ",vetorAB[i]);
}
 
}

