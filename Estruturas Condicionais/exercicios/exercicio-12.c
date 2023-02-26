/*
    Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se  os  valores  podem  ser  um  triângulo.  Indique,  caso  os  lados  formem  um  triângulo,  se  o mesmo é: equilátero, isósceles ou escaleno. Dicas:

    Três  lados  formam  um  triângulo  quando  a  soma  de  quaisquer  dois  lados  for  maior que o terceiro;
    Triângulo Equilátero: três lados iguais;
    Triângulo Isósceles: quaisquer dois lados iguais;
    Triângulo Escaleno: três lados diferentes.
*/

#include "stdio.h"


void main() {
    int num1;
    int num2;
    int num3;


    printf(" Digite o primeiro numero\n");
    scanf("%d",&num1);

    printf(" Digite o segundo numero\n");
    scanf("%d",&num2);

    printf(" Digite o terceiro numero\n");
    scanf("%d",&num3);


    if(num1 + num2 > num3 && num1 + num3 > num2 && num1 + num2 > num3  ){
        printf("\nEh um Triangulo ");
        if(num1 == num2 && num2 == num3 && num1 == num3 ){
            printf("Equilatero");
        } else if( (num1 == num2 && num2 != num3 && num1 != num3)
                || (num3 == num1 && num1 != num2 && num3 != num2)
                || (num2 == num3 && num2 != num1 && num2 != num1)) {
            printf("Isosceles ");
        }
        else {
            printf("Escaleno");
        }
    }
}
