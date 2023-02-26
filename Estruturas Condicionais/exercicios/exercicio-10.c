/*
    Uma empresa decide dar um aumento de 30% aos funcionários com salários
    inferiores a  R$ 500,00.  Faça  um  programa  que  receba o  salário  do funcionário
    e  mostre  o  valor
    do salário reajustado ou uma mensagem, caso o funcionário não tenha direito ao aumento.
*/

#include "stdio.h"

void main() {
    float salario;
    float salario_novo;

    printf("Digite o salario do funcionario\n");
    scanf("%f",&salario);

    if(salario < 500){
        salario_novo = salario + (salario*30/100);
        printf("O salario do funcionario com o aumento de 30\npor cento eh de %.2f ",salario_novo);
    } else{
        printf("O funcionario nao tenha direito ao aumento\n");
    }
}
