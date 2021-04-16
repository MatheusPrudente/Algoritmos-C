/*Zezinho deve pagar uma conta no valor de 120 reais. 
Cada dia que ele atrasa para pagar esta conta, ele deve acrescentar ao valor da conta uma multa de 2%.
 Faça um programa que mostre o valor que Zezinho deverá pagar na conta caso ele atrase 3 dias para pagá-la.*/
 
 #include "stdio.h"
 
int main () {
 
float conta = 120;
float multa;

 
multa = conta*2/100;
conta = conta + multa;

multa = conta*2/100;
conta = conta + multa;

multa = conta*2/100;
conta = conta + multa;
 
printf("\nCaso ele atrase 3 dias para paga-la,\ndevera pagar um total de %.2f reais",conta);
}

