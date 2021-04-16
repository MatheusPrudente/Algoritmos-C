/*Escreva um programa que leia uma matriz 5x10 que se refere respostas de 10 questões de múltipla escolha, 
referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. 
Seu programa devera comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado,
 contendo a pontuação correspondente a cada aluno.*/
 
 #include "stdio.h"
 #include "conio.h"
 
void main() {
 //matriz de teste
 	//char matriz [5][10] = {
	 //{'a','b','c','d','d','c','a','b','c','d'},//aluno0(10 acertos)
	 //{'a','a','a','a','a','a','a','a','a','d'},//aluno1 (3 acertos e 7 erros)
	 //{'b','b','b','d','d','d','d','b','c','b'},//aluno2(5 acertos e 5 erros)
	 //{'a','b','d','d','d','d','d','c','c','d'},//aluno3 (6 acertos e 4 erros)
	 //{'a','b','c','d','d','c','a','a','a','a'}};//aluno4 (7 acertos e 3 erros)
 
 //vetor de teste
	 //char vetorA [10]  = {'a','b','c','d','d','c','a','b','c','d'};
	 
	 
	 
	 char matriz[5][10];
	 char vetorA[10];
	 int vetorB[5];
	 int vetorC[5];
	 int i;
	 int j;
	 
	printf("\n ==== Gabarito  ==== \n\n");

	 for ( i = 0 ; i < 10; i++){
		 	

		   printf("Informe a resposta para a questao [%d] : ",i+1);
		   scanf("%s",&vetorA[i]);
		   
		 
	}
	 	
	printf("\n ==== Notas dos Alunos  ==== \n\n");

	 for ( i = 0 ; i < 5; i++){
	 	 printf("Informe do aluno [%d]\n",i+1);
	 	 
		 for( j = 0; j <10; j++){
		 	
		   printf("Informe a resposta para a questao [%d] : ",j+1);
		   scanf("%s",&matriz[i][j]);
		   
		 }
		printf("\n");
	}
	 
	 for ( i = 0 ; i < 5 ; i++){
	 	
	   int acerto = 0;
	   int erro = 0;
	   
	   for ( j = 0 ; j < 10; j++){
	 
		     if(vetorA[j] == matriz[i][j]){
		       acerto++;
		     }
		     
		     else {
		       erro++;
		     }
	   }
	   
	   vetorB[i] = acerto;
	   vetorC[i] = erro;
	 
	 }
	 
	printf("\n ==== Resultados  ==== \n\n");

	 for ( i = 0; i <5 ; i ++){
	 	
	   printf("Aluno %d",i+1);
	   printf("\n");   
	   printf("  Acertos : %d",vetorB[i]);
	   printf("\n");   
	   printf("  Erros : %d",vetorC[i]);
	   printf("\n");   
	   printf("\n");   
	 
	 }
 }

