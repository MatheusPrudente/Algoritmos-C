/*
    Em  uma  competição  de  salto  em  distância  cada  atleta  tem  direito  a  cinco  saltos.
    No final da série de saltos de cada atleta, o melhor e o pior resultado são eliminados.
    O seu resultado fica sendo a média dos três valores restantes. Você deve fazer um programa
    que receba  o  nome  e  as  cinco  distâncias  alcançadas  pelo  atleta  em  seus  saltos
    e  depois informe a média dos saltos conforme a descrição acima informada (retirar o melhor e o
    pior salto  e  depois  calcular  a  média).  Faça  uso  de  uma  lista  para  armazenar  os
    saltos.  Os saltos  são  informados  na  ordem  da  execução,  portanto  não  são  ordenados.
    O  programa deve ser encerrado quando não for informado o nome do atleta.
    A saída do programa deve ser conforme o exemplo abaixo:

    Atleta: Rodrigo Curvêllo
    Primeiro Salto: 6.5 m
    Segundo Salto: 6.1 m
    Terceiro Salto: 6.2 m
    Quarto Salto: 5.4 m
    Quinto Salto: 5.3 m

    Melhor salto:  6.5 m
    Pior salto: 5.3 m
    Média dos demais saltos: 5.9 m

    Resultado final: Rodrigo Curvêllo: 5.9 m
*/

#include "stdio.h"


int main() {
    float melhor_salto = 0;
    float pior_salto = 10;
    float soma_salto = 0;
    float salto = 0;
    float salto_1 = 0;
    float salto_2 = 0;
    float salto_3 = 0;
    float salto_4 = 0;
    float salto_5 = 0;
    float media_salto;
    char nome [50];
    int i = 1;
    printf("\nInforme o nome do atleta\n");
    scanf("%s",nome);

    while (i<6) {
        printf("\nInforme a distancia do salto %d\n",i);
        scanf("%f",&salto);

        if(i == 1){
            salto_1 =salto;
        } else if(i == 2){
            salto_2 =salto;
        } else if(i == 3){
            salto_3 =salto;
        } else if(i == 4){
            salto_4 =salto;
        } else if(i == 5){
            salto_5 =salto;
        }

        if(salto > melhor_salto){
            melhor_salto = salto;
        }

        if(salto< pior_salto){
            pior_salto = salto;
        }

        soma_salto = soma_salto + salto;
        i++;
    }

    media_salto = (soma_salto - (melhor_salto + pior_salto))/3;

    printf("\nAtleta : %s \n",nome);
    printf("Primeiro salto : %.1f m\n",salto_1);
    printf("Segundo salto : %.1f m\n",salto_2);
    printf("Terceiro salto : %.1f m\n",salto_3);
    printf("Quarto salto : %.1f m\n",salto_4);
    printf("Quinto salto : %.1f m\n\n",salto_5);
    printf("Melhor salto: %.1f m\n",melhor_salto);
    printf("Pior salto %.1f m\n",pior_salto);
    printf("Media dos demais saltos: %.1f\n\n",media_salto);
    printf("Resultado final: %s : %.1f",nome,media_salto);
}
