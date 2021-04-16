/*Faça um programa que use uma função para calcular a enésima potência de uma variável x.
 Note que para calcular a potência n 
 de um número basta multiplicar este número por ele mesmo n vezes.*/
 
 #include "stdio.h"
 
 void enesimaPotencia(int x, int potencia){
   int i;
   int resultado = 1;
   
  
   for(i = 1; i <= potencia; i++){
		resultado = resultado * x;

   }

	printf("\n\n------ Resultado --------\n\n"); 
	printf("  %d elevado a %d : %d",x,potencia,resultado);
   
    	
 	
 }
 
 void main(){
 	
 	int x;
 	int potencia;
 	
    printf("------ Potencia --------\n\n");

 	printf("Informe um valor : ");
 	scanf("%d",&x);
 	
 	printf("Informe a potencia deste valor : ");
 	scanf("%d",&potencia);
 	
 	enesimaPotencia(x,potencia);
 }
