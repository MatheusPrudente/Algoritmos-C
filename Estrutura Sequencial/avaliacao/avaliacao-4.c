/*
    Zezinho deve pagar uma conta no valor de 120 reais.
    Cada dia que ele atrasa para pagar esta conta, ele deve acrescentar ao valor da conta uma multa de 2%.
    Fa�a um programa que mostre o valor que Zezinho dever� pagar na conta caso ele atrase 3 dias para pag�-la.
*/

#include "stdio.h"

void main () {
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

