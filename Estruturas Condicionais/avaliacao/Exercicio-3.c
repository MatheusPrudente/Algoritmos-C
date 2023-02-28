/*Fa�a um programa em C que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:

"Telefonou para a v�tima?"
"Esteve no local do crime?"
"Mora perto da v�tima?"
"Devia para a v�tima?"
"J� trabalhou com a v�tima?"

O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. 
 Se a pessoa responder positivamente a 2 quest�es ela deve ser classificada como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino".
 Caso contr�rio, ele ser� classificado como "Inocente".*/

#include "stdio.h"

void main() {
   int resposta1;
   int resposta2;
   int resposta3;
   int resposta4;
   int resposta5;

   printf(" \n-----------------------------\n");
   printf("Telefonou para a vitima? (1)Sim/(2)Nao\n");
   printf("R:");
   scanf("%d",&resposta1);
   printf("Esteve no local do crime? (1)Sim/(2)Nao\n");
   printf("R:");
   scanf("%d",&resposta2);
   printf("Mora perto da vitima? (1)Sim/(2)Nao\n");
   printf("R:");
   scanf("%d",&resposta3);
   printf("Devia para a vitima? (1)Sim/(2)Nao\n");
   printf("R:");
   scanf("%d",&resposta4);
   printf("Ja trabalhou com a vitima? (1)Sim/(2)Nao\n");
   printf("R:");
   scanf("%d",&resposta5);
   printf(" \n-----------------------------\n");

   printf(" Declarado : ");

   if ( resposta5 == 1){
      printf("Assassino\n");
   } else if (resposta3 == 1 && resposta4 == 1 ){
      printf("Cumplice\n");
   } else if (resposta2== 1 ){
      printf("Suspeita\n");
   } else{
      printf("Inocente\n");
   }
}

