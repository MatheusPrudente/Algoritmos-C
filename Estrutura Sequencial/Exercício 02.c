/*Faça um programa em C que receba um número, 
representando a capacidade de um HD em gigabytes e 
converta esta capacidade para megabytes e kilobytes, 
mostrando estes resultados.*/

#include "stdio.h"

void main (){

 int giga,mega,kylo;
 
 printf (" Digite a capacidade do HD em gigabytes : ");
 scanf ("%d",&giga);
 
 /* giga para mega multiplique o valor de armazenamento de dados por 1000
*/

  /* mega para kylo multiplique o valor de armazenamento de dados por 1000
*/
 
 mega = giga*1000;
 kylo = mega*1000;
 
 printf ("\n Capacidade em gigabyte(s) :  %d\n",giga);
 printf (" Capacidade em megabyte(s) :  %d\n",mega);
 printf (" Capacidade em kilobyte(s) :  %d\n",kylo);

}

