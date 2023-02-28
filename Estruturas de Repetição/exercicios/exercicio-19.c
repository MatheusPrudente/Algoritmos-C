/*
    Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores.
    Peça  para  cada  eleitor  votar  e  ao  final  mostrar  o  número  de  votos  de  cada candidato.
*/

#include "stdio.h"

void main() {
    int qtd_eleitor = 0;
    int voto = 0;
    int voto_candidatoA = 0;
    int voto_candidatoB = 0;
    int voto_candidatoC = 0;
    int v;

    printf ("-----------candidatos ---------\n");
    printf ("candidato A eh o numero 10\n");
    printf ("candidato B eh o numero 20\n");
    printf ("candidato C eh o numero 30\n");

    printf ("\nInforme o numero de eleitores:\n");
    scanf ("%d",&qtd_eleitor);

    for (int i = 0; i <qtd_eleitor;i++) {
        v=0;

        while(v < 1){
            printf ("\n\nEh a vez do eleitor numero %d\n Informe o seu voto:\n",i+1);
            scanf ("%d",&voto);

            if (voto == 10){
                voto_candidatoA = voto_candidatoA + 1;
                v++;
            } else if (voto == 20){
                voto_candidatoB = voto_candidatoB + 1;
                v++;
            } else if (voto == 30){
                voto_candidatoC = voto_candidatoC + 1;
                v++;
            } else {
                printf("Nao ha candidato com este numero,\ninforme um numero valido ");
            }
        }
    }

    printf ("\ncandidato A recebeu %d voto(s)\n",voto_candidatoA);
    printf ("candidato B recebeu %d voto(s)\n",voto_candidatoB);
    printf ("candidato C recebeu %d voto(s)\n",voto_candidatoC);
}

