/*
    Pedro comprou um saco de ração com peso em quilos.
    Ele possui dois gatos, para os quais  fornece  a  quantidade  de ração  em  gramas. 
    A  quantidade  diária  de  ração  fornecida para  cada  gato  é  sempre  a  mesma.
    Faça  um  programa  que  receba  o  peso  do  saco  de ração e a quantidade de ração fornecida para cada gato, 
    calcule e mostre quanto restará de ração no saco após cinco dias.
*/

#include "stdio.h"


void main () {
    int racao;
    float gato1;
    float gato2;
    float racao_final;

    printf("Digite o peso inicial da racao em quilogramas\n");
    scanf("%d",&racao);
    printf("Digite em gramas quanto de raca o gato 1 come\n");
    scanf("%f",&gato1);
    printf("Digite em gramas quanto de raca o gato 2 come\n");
    scanf("%f",&gato2);
    gato1 = gato1/1000;
    gato2 = gato2/1000;
    racao_final = racao - 5*(gato1 + gato2);


    printf("O gato 1 comeu %.2f kg de racao em 5 dias\n",5*gato1);
    printf("O gato 2 comeu %.2f kg de racao em 5 dias\n",5*gato2);
    printf("Sobrou %.2f kg de racao no pacote depois de 5dias\n",racao_final);
}
