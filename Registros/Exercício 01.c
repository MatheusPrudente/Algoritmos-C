/*Uma empresa contratou 15 funcion�rios tempor�rios.
De acordo com o valor das vendas mensais, os funcion�rios adquirem pontos que determinar�o seus sal�rios ao final de cada m�s.
Sabe-se que esses funcion�rios trabalhar�o nos meses de novembro de 2000 a janeiro de 2001. Fa�a um programa que:

a)    Cadastre os nomes dos funcion�rios e suas respectivas vendas mensais;

b)    Calcule e mostre a pontua��o geral de cada funcion�rio nos tr�s meses. Sabe-se que R$ 100,00 equivalem a 1 ponto;

c)    Calcule e mostre a pontua��o geral de todos os funcion�rios a cada m�s;

d)    Determine e mostre a maior pontua��o atingida nos tr�s meses, mostrando o nome do funcion�rio. Desconsiderar empates;

e)    Determine e mostre o valor total vendido.*/
#include "stdio.h"
#include "string.h"


typedef struct {
    char nome[50];
    float venda[3];
    float pontuacao[3];
    float total_pontuacao;
    float total_venda;
} funcionario;


void cadastrarFuncionario(funcionario *f){
    int i;
    int j;

    for (i = 0; i < 15; i++) {
        float total_venda = 0;
        float total_pontuacao = 0;

        printf("\n     -------  Funcionario [%d] ------  \n\n",i+1);

        printf("\n   Informe o nome : ");
        scanf("%s",&f[i].nome);

        for (j = 0; j < 3; j++) {
            printf("   Informe o valor das vendas do [%d] mes : ",j + 1);
            scanf("%f",&f[i].venda[j]);

            f[i].pontuacao[j] = f[i].venda[j]/100;

            total_venda = total_venda + f[i].venda[j];
            total_pontuacao = total_pontuacao + f[i].pontuacao[j];
        }

        f[i].total_pontuacao = total_pontuacao;
        f[i].total_venda = total_venda;
    }
}

void mostrarFuncionario(funcionario *f){
    int i = 0;
    int j;

    for (i = 0; i < 15; i++) {
        printf("\n     -------  Funcionario  ------  \n\n");
        printf("Nome : %s",f[i].nome);

        for (j = 0; j < 3; j++) {
            printf("\n\n   --- %d mes ---\n",j + 1);
            printf("\n   Venda : %.2f",f[i].venda[j]);
            printf("\n   Pontos: %.2f",f[i].pontuacao[j]);
        }

        printf("\n\n    -------  Total individual ------  \n\n");
        printf("\n   Total de vendas : %.2f",f[i].total_venda);
        printf("\n   Total de pontos : %.2f",f[i].total_pontuacao);
        printf("\n --------------------------------------------\n\n");
    }
}

void melhorFuncionario(funcionario *f){
    int mes = 0;
    int i;
    int j;
    float maior_venda = 0.000;
    float maior_pont = 0.000;
    char nome_maior_pont[50];
    funcionario f_atual;

    for (i = 0; i < 15; i++) {
        f_atual = f[i];

        for (j = 0; j < 3; j++) {
            if (f_atual.pontuacao[j] > maior_pont){
                maior_pont = f_atual.pontuacao[j];
                maior_venda = f_atual.venda[j];
                strcpy (nome_maior_pont,f_atual.nome);
                mes = j;
            }
        }
    }

    printf("\n     ------- Melhor funcionario ------  \n\n");
    printf("Nome : %s",nome_maior_pont);
    printf("\n   Mes: %d",mes+1);
    printf("\n   Maior venda : %.2f",maior_venda);
    printf("\n   Maior pontuacao : %.2f",maior_pont);
    printf("\n     ---------------------------------  \n\n");
}

void totalVenda(funcionario *f){
    funcionario f_atual;
    float final_venda = 0;
    float final_ponto = 0;
    int i;
    int j;

    printf("\n     ------- Total ------  \n\n");

    for (i = 0; i < 3; i++) {
        float mes_venda =0;
        float mes_pon =0;

        for (j = 0; j < 15; j++) {
            f_atual = f[j];
            mes_venda = mes_venda + f_atual.venda[i];
            mes_pon = mes_pon + f_atual.pontuacao[i];
        }

        printf("\n\n Mes [%d] : \n\n",i+1);
        printf("\n  Total de vendas : %.2f",mes_venda);
        printf("\n  Total de pontos : %.2f",mes_pon);
    }

    for (i = 0; i < 15; i++) {
        float mes_venda =0;
        float mes_pon =0;

        f_atual = f[i];

        for (j = 0; j < 3; j++) {
            final_venda = final_venda + f_atual.venda[j];
            final_ponto = final_ponto + f_atual.pontuacao[j];
        }
    }

    printf("\n\n Total tres meses : \n\n");
    printf("\n  Total de vendas : %.2f",final_venda);
    printf("\n  Total de pontos : %.2f",final_ponto);
}

void main(){
    printf("\n------------- Cadastro do Funcionario ----------------\n\n");
    funcionario fun[15];
    cadastrarFuncionario(fun);
    melhorFuncionario(fun);

    printf("\n------------- Relatorio Individual ----------------\n\n");
    mostrarFuncionario(fun);

    printf("\n------------- Relatorio Geral ----------------\n\n");
    totalVenda(fun);
}
