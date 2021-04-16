//refazer
/*Faça um programa que leia dois vetores de 10 elementos. 
O programa deve criar um vetor que seja a união entre os 2 vetores anteriores, 
ou seja, que contém os números dos dois vetores, mas não deve conter números repetidos.
*/

#include "stdio.h"

void main(){
	
int vetorA[10];
int vetorB[10];
int vetorAB[20];
int tam = 0;
int rep = 0;
int i;

printf("---------- Vetor A ----------\n\n");
 
for( i = 0; i< 10;i++){
	printf("Informe o valor [%d] : ",i);
	scanf("%d",&vetorA[i]);
 
}
 
printf("\n---------- Vetor B ----------\n\n");
 
for( i = 0; i< 10;i++){
	printf("Informe o valor [%d] : ",i);
	scanf("%d",&vetorB[i]);
 
}

for( i = 0; i< 10;i++){
	int a;
	 for (a = 0; a < tam; a++) {
	       if (vetorAB[a] == vetorA[i]){
	           rep++;
	       }
	   }
	 
	 if(rep ==0){
	     vetorAB[tam++] = vetorA[i];
	 }
 
}
 

 
for( i = 0; i< 10;i++){
rep = 0;
	int b;
	 for (b = 0; b < tam; b++) {
	       if (vetorAB[b] == vetorB[i]){
	           rep++;
	       }
	   }
	 
	 if(rep==0){
	     vetorAB[tam++] = vetorB[i];
	 }
	 
}

printf("\n---------- Vetor AB ----------\n\n");
int u;
for( u = 0; u < tam; u++){
	
       printf("%d ", vetorAB[u]);
       
}
 
}

