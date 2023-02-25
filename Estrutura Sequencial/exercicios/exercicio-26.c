/*
    Faça  um  programa  que  receba  a  medida  de  dois  ângulos  de  um  triângulo,
    calcule  e mostre a medida do terceiro ângulo.
*/

#include "stdio.h"

void main () {
    int ang1;
    int ang2;
    int ang3;

    printf("Digite o valor do angulo 1 do trinagulo \n");
    scanf("%d",&ang1);
    printf("Digite o valor do angulo 2 do trinagulo \n");
    scanf("%d",&ang2);
    ang3 = 180 - (ang1 + ang2);

    printf("O terceiro angulo eh %d",ang3);
}
