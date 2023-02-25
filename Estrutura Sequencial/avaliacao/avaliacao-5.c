/*Fa�a um programa em C que receba a altura e o peso de uma pessoa e calcule o valor de seu 
�ndice de massa corp�rea (IMC) com 
tr�s casas decimais. Considere a f�rmula �IMC = peso / altura * altura�.*/


#include "stdio.h"
 
int main () {
 
float altura;
float peso;
float imc;


printf(" Digite a altura : ");
scanf("%f",&altura);
printf(" Digite a peso : ");
scanf("%f",&peso);

imc= peso/(altura*altura);

 printf("O IMC : %.2f", imc);

}
