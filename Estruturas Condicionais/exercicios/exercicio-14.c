/*
    Faça  um  programa  para  calcular  e  mostrar  o  salário  reajustado  de
      um  funcionário. Sabe-se que o percentual de aumento é o mesmo da tabela a seguir.
*/

#include "stdio.h"


void main() {
    float salario;
    float salario_novo;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&salario);

    if(salario <= 300){
        salario_novo = salario + (salario*0.35);
        printf("O salario do funcionario com o aumento de 30 eh de %.2f ",salario_novo);
    } else{
        salario_novo = salario + (salario*0.15);
        printf("O salario do funcionario com o aumento de 15 eh de %f ",salario_novo);
    }
}
