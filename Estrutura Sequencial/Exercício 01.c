/*Fa�a um programa em C que receba um n�mero real
 e mostre uma mensagem contendo o n�mero digitado
  com apenas 2 casas decimais.*/
  
  #include "stdio.h"
  
  void main (){
    
	float num;    
   
  	printf("Digite o numero real : ");
	scanf("%f", &num);
    printf("Seu numero eh : %.2f",num);
    
  }
  
