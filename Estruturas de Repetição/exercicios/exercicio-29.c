/*
    Crie  um programa que  ajude  o  DETRAN a  saber o  total  de  recursos  que  foram arrecadados
    com  a  aplicação  de  multas  de  trânsito.  O programa deve  ler  as  seguintes informações
    para  cada  motorista: O  número  da  carteira  de  motorista  (de  1  a  4327); Número de multas;
    e Valor da cada uma das multas. Deve ser impresso o valor da dívida de cada motorista e ao final
    da leitura o total de recursos arrecadados (somatório de todas as  multas). O programa  deverá
    imprimir  também  o  número  da  carteira  do motorista  que obteve o maior número de multas.
*/


#include "stdio.h"


void main() {
    int carteira,qtd_multa,maior_devedor,i,m;
    float valor_multa,soma_multa,soma_geral,maior_soma;

    i= 0;
    m= 0;
    maior_devedor = 0;
    soma_multa = 0;
    soma_geral = 0;
    maior_soma = 0;

    while (m < 1){
        printf("\nInforme o numero da carteira do motorista,\nUtilize zero para terminar. \n");
        scanf("%d",&carteira);

        if(carteira > 0 && carteira <4328) {
            printf("\nInforme o numero \nde multas aplicadas\n");
            scanf("%d",&qtd_multa);


            if(qtd_multa > 0){
                while(i<qtd_multa){
                    printf("\nInforme o valor da multa\n");
                    scanf("%f",&valor_multa);
                    soma_multa = soma_multa + valor_multa;
                    i++;
                }
            } else {
                printf("\nInforme o numero valido");
            }

            if(soma_multa > maior_soma) {
                maior_devedor = carteira;
                maior_soma = soma_multa;
            }

            soma_geral = soma_geral + soma_multa;


            printf("\nO motorista da carteira %d\n",carteira);
            printf("\nCom %d multa(s)\n",qtd_multa);
            printf("\nDeve R$ %.2f ao DETRAN\n",soma_multa);
        } else if(carteira == 0){
            m++;
        } else {
            printf("\nInforme o numero valido");
        }
    }

    printf("\nO total arrecadado pelo DETRAN foi %.2f\n",soma_geral);
    printf("\nE o maior devedor eh o com carteira %d\n",maior_devedor);
    printf("\nQue deve R$ %.2f\n",maior_soma);
}
