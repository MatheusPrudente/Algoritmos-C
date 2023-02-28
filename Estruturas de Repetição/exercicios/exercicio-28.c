/*
    Faça  um  algoritmo  que  leia  informações  de  alunos  (Matrícula,  Nota1,  Nota2,  Nota3) com o
    fim  das  informações  indicado  por  Matrícula  =  9999.  Para  cada  aluno  deve  ser calculada a
    média final de acordo com a seguinte fórmula:
    Média final = [(2 * Nota1) + (3 * Nota2) + (4 * Nota 3)] / 9
    Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula,
    Média Final e a  mensagem  "APROVADO";  se  a  média  final  for  inferior  a  5,
    o  algoritmo  deve  mostrar Matrícula,  Média Final  e  a  mensagem  "REPROVADO".
    Ao  final  devem  ser  mostrados  o total de aprovados, o total de alunos da turma e o
    total de reprovados.
*/


#include "stdio.h"


void main() {
    float nota1,nota2,nota3,media_final;
    int matricula,i,qtd_aluno,qtd_aprovado,qtd_reprovado;

    qtd_aluno = 0;
    qtd_aprovado = 0;
    qtd_reprovado = 0;

    while(i<1) {
        printf("\nInforme a matricula do aluno\n");
        scanf("%d",&matricula);

        if(matricula < 9999 ){
            printf("\nInforme a nota1\n");
            scanf("%f",&nota1);

            printf("\nInforme a nota2\n");
            scanf("%f",&nota2);

            printf("\nInforme a nota3\n");
            scanf("%f",&nota3);

            media_final = ((2 * nota1) + (3 * nota2) + (4 * nota3)) / 9;

            if(media_final >= 5){
                printf("o aluno %d com media %.1f foi Aprovado\n",matricula,media_final);
                qtd_aprovado++;
            } else {
                printf("o aluno %d com media %.1f foi Reprovado\n",matricula,media_final);
                qtd_reprovado++;
            }

            qtd_aluno++;
        } else {
            i++;
        }
    }
    printf("\nA turma com %d alunos\nteve %d de aprovado(s)\ne %d de reprovado(s)",qtd_aluno,qtd_aprovado,qtd_reprovado);
}
