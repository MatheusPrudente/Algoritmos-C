/*
    Faça  um programa que  calcule  a  média  de  salários  de  uma  empresa,
    pedindo  ao usuário o código dos funcionários os salários e devolvendo a média,
    o salário mais alto e o salário mais baixo. Use o código= 99999 para encerrar a leitura.
*/

#include “stdio.h”


void main() {
    float media;
    int codigo;
    float salario;
    float maior_salario= 0;
    float menor_salario = 1000000;
    float soma_salario = 0;
    int i = 0;
    int qtd_funcionario = 0;


    while (i < 1) {
        printf ("Digite o codigo do funcionario :\n");
        scanf ("%d",&codigo);

        if (codigo < 99999){
            printf ("Digite o salario do funcionario : \n");
            scanf ("%f",&salario);

            if(salario > maior_salario){
                maior_salario = salario;
            }

            if (salario < menor_salario){
                menor_salario = salario;
            }
            qtd_funcionario++;
            soma_salario = soma_salario + salario;
        } else {
            i++;
        }
    }

    media = soma_salario/qtd_funcionario;
    printf ("\na media de salario eh %.2f\n",media);
    printf ("O salario mais alto eh %.2f\n",maior_salario);
    printf ("O salario mais baixo eh %.2f\n",menor_salario);
}
