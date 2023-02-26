/*Fa�a um programa que use uma fun��o para calcular a en�sima pot�ncia de uma vari�vel x.
 Note que para calcular a pot�ncia n
 de um n�mero basta multiplicar este n�mero por ele mesmo n vezes.*/

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
