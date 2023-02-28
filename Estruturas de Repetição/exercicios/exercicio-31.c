/*
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber:
    A Média de salário da população;
    A média do número de filhos;
    O maior salário;
    A percentagem de pessoas com salários até R$ 150,00.

    O final da leitura de dados se dará com a entrada de um salário negativo.
*/

#include "stdio.h"


void main() {
    float media_salario,maior_salario,salario,media_filho,soma_salario;
    int qtd_pessoa,porcentagem_pessoa,filho,soma_filho,i;

    i = 0;
    media_salario = 0;
    maior_salario = 0;
    media_filho = 0;
    filho = 0;
    qtd_pessoa = 0;
    porcentagem_pessoa = 0;
    soma_salario = 0;
    soma_filho = 0;

    while( i <1) {
        printf("\nInforme o salario :\n");
        scanf("%f",&salario);

        if(salario > 0) {
            soma_salario = soma_salario + salario;

            if(salario <= 150){
                porcentagem_pessoa++;
            }

            if( salario > maior_salario){
                maior_salario = salario;
            }

            printf("\nInforme o numero de filhos :\n");
            scanf("%d",&filho);

            soma_filho = soma_filho + filho;
            qtd_pessoa++;
        }  else {
            i++;
        }
    }

    porcentagem_pessoa = porcentagem_pessoa*100/qtd_pessoa;
    media_salario = soma_salario/qtd_pessoa;

    if(qtd_pessoa > 1) {
        media_filho = soma_filho/ (qtd_pessoa/2);
    } else {
        media_filho = soma_filho/ qtd_pessoa;
    }

    printf("\nA media de salario da populacao eh %.2f\n",media_salario);
    printf("\nA media do numero de filhos eh %.1f\n",media_filho);
    printf("\nO maior salario eh %.2f\n",maior_salario );
    printf("\nA percentagem de pessoas com salários até R$ 150,00 eh %d\n",porcentagem_pessoa);
}