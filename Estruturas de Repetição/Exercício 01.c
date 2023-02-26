/*Fa�a um programa que leia informa��es de alunos (Matricula, Nota1, Nota2, Nota3)
com o fim das informa��es indicado por Matricula = 9999.
Para cada aluno deve ser calculada a m�dia final de acordo com a seguinte f�rmula:
 M�dia final = [(2 * Nota1) + (3 * Nota2) + (4 * Nota 3)] / 9

Se a m�dia final for igual ou superior a 5, o algoritmo deve mostrar Matr�cula,
M�dia Final e a mensagem "APROVADO"; se a m�dia final for inferior a 5,
o algoritmo deve mostrar Matricula, M�dia Final e a mensagem "REPROVADO".
 Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o total de reprovados.*/


#include "stdio.h"


void main () {
    int matricula, num_aluno = 0,num_aprovado = 0 ,num_reprovado = 0;
    float media,nota1,nota2,nota3;

    do {
        printf("Informe a matricula do aluno : ");
        scanf("%d",&matricula);

        if (matricula< 9999) {
            printf("Informe a nota 	1 do aluno : ");
            scanf("%f",&nota1);

            printf("Informe a nota  2 do aluno : ");
            scanf("%f",&nota2);

            printf("Informe a nota  3 do aluno : ");
            scanf("%f",&nota3);

            media = ((2*nota1) + (3*nota2) + (4*nota3))/ 9;

            if (media >= 5) {
                printf("\n\n");
                printf("Matricula : %d\n",matricula);
                printf("Media Final : %.2f\n",media);
                printf("Aluno APROVADO");
                printf("\n\n");
                num_aprovado++;
            } else {
                printf("\n\n");
                printf("Matricula : %d\n",matricula);
                printf("Media Final : %.2f\n",media);
                printf("Aluno REPROVADO");
                printf("\n\n");
                num_reprovado++;
            }
            num_aluno++;
        }
    } while(matricula< 9999);


    printf("\n\n\n");
    printf("------ Resultados -----------\n");
    printf("Total de alunos : %d\n",num_aluno);
    printf("Total de aprovados : %d\n",num_aprovado);
    printf("Total de reprovados : %d\n",num_reprovado);
    printf("\n\n\n");
}
