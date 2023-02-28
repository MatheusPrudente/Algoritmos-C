/*
    Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a
    pior nota são eliminadas. A sua nota fica sendo a média dos votos restantes. Você deve
    fazer um programa que receba o nome do ginasta e as notas dos sete jurados alcançadas pelo
    atleta  em  sua  apresentação  e  depois  informe  a  sua  média,  conforme  a  descrição acima
    informada  (retirar  o  melhor  e  o  pior  salto  e  depois  calcular  a  média  com  as  notas
    restantes). As notas não são informadas ordenadas. Um exemplo de saída do programa deve ser
    conforme o exemplo abaixo:

    Atleta: Aparecido Parente

    Nota: 9.9
    Nota: 7.5
    Nota: 9.5
    Nota: 8.5
    Nota: 9.0
    Nota: 8.5
    Nota: 9.7

    Resultado final:Atleta: Aparecido Parente
    Melhor nota: 9.9
    Pior nota: 7.5
    Média: 9,04
*/

#include "stdio.h"

void main() {
    float melhor_nota = 0;
    float pior_nota = 10;
    float soma_nota = 0;
    float nota = 0;
    float nota_1 = 0;
    float nota_2 = 0;
    float nota_3 = 0;
    float nota_4 = 0;
    float nota_5 = 0;
    float nota_6 = 0;
    float nota_7 = 0;


    float media_nota = 0 ;
    char nome [50];
    int i = 1;
    printf("\nInforme o nome do atleta\n");
    scanf("%s",nome);

    while (i<8) {
        printf("\nInforme a nota %d\n",i);
        scanf("%f",&nota);
        if(i == 1){
            nota_1 =nota;
        } else if(i == 2){
            nota_2 =nota;
        } else if(i == 3){
            nota_3 =nota;
        } else if(i == 4){
            nota_4 =nota;
        } else if(i == 5){
            nota_5 =nota;
        } else if(i == 6){
            nota_6 =nota;
        } else if(i == 7){
            nota_7 =nota;
        }
        if(nota > melhor_nota){
        melhor_nota = nota;
        }

        if(nota< pior_nota){
        pior_nota = nota;
        }

        soma_nota = soma_nota + nota;
        i++;
    }

    media_nota = (soma_nota - (melhor_nota + pior_nota))/5;
    printf("\nAtleta : %s \n",nome);
    printf("Nota: %.1f \n",nota_1);
    printf("Nota : %.1f \n",nota_2);
    printf("Nota : %.1f \n",nota_3);
    printf("Nota : %.1f \n",nota_4);
    printf("Nota : %.1f \n",nota_5);
    printf("Nota : %.1f \n",nota_6);
    printf("Nota : %.1f \n\n",nota_7);


    printf("Melhor nota: %.1f \n",melhor_nota);
    printf("Pior nota %.1f \n",pior_nota);
    printf("Media dos demais notas: %.1f\n\n",media_nota);
    printf("Resultado final: %s : %.2f",nome,media_nota);
}
