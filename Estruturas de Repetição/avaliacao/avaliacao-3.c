//Refazer

/*Fa�a um programa que apresente o menu de op��es a seguir realizando o que cada op��o representa:

Menu de op��es:

1.    M�dia aritm�tica de N n�meros.

2.    M�dia ponderada de N n�meros.

3.    Sair.

Digite a op��o desejada:

Note que o programa ficar� em um looping, repetindo: a impress�o do menu, capturando a op��o do usu�rio e executando a opera��o desejada.

Verifique a possibilidade de op��o inv�lida, mostrando uma mensagem neste caso.*/
#include "stdio.h"

void main() {
    int qtd_numero,i,opcao,x;
    float media_ponderada,media_aritmetica,numero,peso,soma_peso;

    soma_peso = 0;
    peso = 0;
    qtd_numero = 0;
    i = 0;
    x = 0;
    opcao = 0;
    media_ponderada = 0;
    media_aritmetica = 0;
    numero = 0;

    printf("\nMenu de opcoes: \n\n");
    printf("1.media aritmetica de N numeros.\n");
    printf("2.media ponderada de N numeros.\n");
    printf("3.Sair.\n\n");

    while (x<1) {
        printf("Informe sua opcao : \n");
        scanf("%d",&opcao);

        if( opcao == 1){
            printf("Informe a quantidade de numeros para a media aritmetica\n");
            scanf("%d",&qtd_numero);

            if(qtd_numero>1) {
                while(i<qtd_numero) {
                    printf("Informe o %d numero\n",i+1);
                    scanf("%f",&numero);
                    media_aritmetica = media_aritmetica + numero;
                    i++;
                }

                media_aritmetica = media_aritmetica/qtd_numero;
                x++;
                printf("A media aritmetica entre os %d numero(s) eh de %.1f ",qtd_numero,media_aritmetica);
            } else {
                printf("Informe um numero maior que 1");
                x++;
            }
        } else if( opcao == 2){
            printf("Informe a quantidade de numeros para a media ponderada\n");
            scanf("%d",&qtd_numero);

            if(qtd_numero > 1){
                while(i<qtd_numero){
                    printf("Informe o %d numero\n",i+1);
                    scanf("%f",&numero);

                    printf("Informe o %d peso\n",i+1);
                    scanf("%f",&peso);
                    media_ponderada = media_ponderada + (numero*peso);
                    soma_peso = soma_peso + peso;
                    i++;
                }

                media_ponderada = media_ponderada/soma_peso;
                printf("A media media_ponderada entre os %d numero(s)\n eh de %.1f ",qtd_numero,media_ponderada);
                x++;
            }  else {
                printf("Informe um numero maior que 1\n");
                x++;
            }
        } else if(opcao == 3){
            x++;
        } else{
            printf("Informe uma opcao valida");
        }
    }
}

