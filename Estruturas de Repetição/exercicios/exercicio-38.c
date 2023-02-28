/*
    Desenvolver  um  programa  para  verificar  a  nota  do  aluno  em  uma  prova  com  10 questões,
    o  programa  deve  perguntar  ao  aluno  a  resposta  de cada  questão  e  ao  final comparar
    com o  gabarito  da prova  e  assim calcular  o  total de acertos  e a  nota
    (atribuir 1 ponto por resposta certa). Após cada aluno utilizar o sistema deve ser feita uma
    pergunta se outro aluno vai utilizar o sistema. Após todos os alunos terem respondido informar:

    Maior e Menor Acerto;
    Total de Alunos que utilizaram o sistema;
    A Média das Notas da Turma.

    Após concluir isto você poderia incrementar o programa permitindo que o professor digite o
    gabarito da prova antes dos alunos usarem o programa.
*/

#include "stdio.h"
void main() {
    char resposta_1;
    char resposta_2;
    char resposta_3;
    char resposta_4;
    char resposta_5;
    char resposta_6;
    char resposta_7;
    char resposta_8;
    char resposta_9;
    char resposta_10;
    char resposta_aluno;
    int acerto = 0;
    int erro;
    int maior_acerto = 0;
    int menor_acerto = 10;
    int qtd_aluno = 0;
    int soma_acerto = 0;
    float media_nota;
    int i = 0;

    printf("\n-------- Gabarito da prova ---------\n");
    printf("\nInforme a resposta da questao 1 (a/b/c/d/e)\n");
    scanf("%s",&resposta_1);
    printf("Informe a resposta da questao 2 (a/b/c/d/e)\n");
    scanf("%s",&resposta_2);
    printf("Informe a resposta da questao 3 (a/b/c/d/e)\n");
    scanf("%s",&resposta_3);
    printf("Informe a resposta da questao 4 (a/b/c/d/e)\n");
    scanf("%s",&resposta_4);
    printf("Informe a resposta da questao 5 (a/b/c/d/e)\n");
    scanf("%s",&resposta_5);
    printf("Informe a resposta da questao 6 (a/b/c/d/e)\n");
    scanf("%s",&resposta_6);
    printf("Informe a resposta da questao 7 (a/b/c/d/e)\n");
    scanf("%s",&resposta_7);
    printf("Informe a resposta da questao 8 (a/b/c/d/e)\n");
    scanf("%s",&resposta_8);
    printf("Informe a resposta da questao 9 (a/b/c/d/e)\n");
    scanf("%s",&resposta_9);
    printf("Informe a resposta da questao 10 (a/b/c/d/e)\n");
    scanf("%s",&resposta_10);

    while(i<1) {

        printf("\n--------Correcao das respostas---------\n");
        printf("\n\nInforme a resposta da questao 1 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_1){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';

        printf("Informe a resposta da questao 2 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);
        if(resposta_aluno == resposta_2){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';

        printf("Informe a resposta da questao 3 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);
        if(resposta_aluno == resposta_3){
            acerto = acerto + 1;
        }
        else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';

        printf("Informe a resposta da questao 4 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);
        if(resposta_aluno == resposta_4){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';

        printf("Informe a resposta da questao 5 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);
        if(resposta_aluno == resposta_5){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }

        resposta_aluno = ' ';
        printf("Informe a resposta da questao 6 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_6){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';
        printf("Informe a resposta da questao 7 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_7){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }

        resposta_aluno = ' ';
        printf("Informe a resposta da questao 8 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_8){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }
        resposta_aluno = ' ';
        printf("Informe a resposta da questao 9 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_9){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }

        resposta_aluno = ' ';
        printf("Informe a resposta da questao 10 (a/b/c/d/e)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == resposta_10){
            acerto = acerto + 1;
        } else {
            erro = erro + 1;
        }

        if(acerto > maior_acerto){
            maior_acerto = acerto;
        }

        if(acerto < menor_acerto){
            menor_acerto = acerto;
        }

        qtd_aluno++;
        soma_acerto = soma_acerto + acerto;
        printf("Informe se outro aluno vai utilizar o sistema (s/n)\n");
        scanf("%s",&resposta_aluno);

        if(resposta_aluno == 'n'){
            i++;
        }
    }

    media_nota = soma_acerto/qtd_aluno;
    printf("\nO maior numero de acertos foi %d\n",maior_acerto);
    printf("O menor numero de acertos foi %d\n",menor_acerto);
    printf("O total de alunos que utilizaram o sistema foi %d\n",qtd_aluno);
    printf("A media de notas da turma foi %.1f\n",media_nota);
}
