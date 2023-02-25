//refazer

/*
Fa�a um programa que receba um nome e gere como sa�da o nome digitado e seu login.
 Lembre-se de respeitar as letras min�sculas e mai�sculas,
  j� que o login ser� sempre com letras min�sculas.
   A regra para gera��o do login �:
   a primeira letra do nome e caso exista apenas um sobrenome,
   deve-se acrescent�-lo; caso existam dois sobrenomes,
   deve-se gerar a primeira letra do nome,
   mais a primeira letra do primeiro sobrenome,
   seguido do �ltimo sobrenome;
   caso existam tr�s ou mais sobrenomes,
   deve-se proceder como como na situa��o anterior, considerando o nome,
    o primeiro sobrenome e o �ltimo nome.

Exemplos:

Nome: Pedro Hansdorf

Login: phansdorf



Nome: Robson Soares Silva

Login: rssilva



Nome: Jaqueline Oliveira Fernandes Espanhola

Login: joespanhola*/


# include "stdio.h"
# include "string.h"


void main () {
    char frase1[100];
    char frase2[100];
    char frase[105];

    int i = 0 ;
    int x = 0;

    int espaco = 0;
    int tamanho ;

    printf("\nInforme seu nome: ");
    gets(frase1);
    tamanho = strlen(frase1);

    for (i = 0; i <= tamanho;i++){
        char caractere  = frase1 [i];

        if (caractere  == ' '){
            espaco++;
        }
    }

    for(i=0;i<tamanho;i++){
        frase2[i+1]=frase1[i];
    }

    strlwr(frase2);

    printf("\n\n------ Resultado --------\n\n");
    printf("Nome  : %s\n",frase1);
    printf("Login: : ");
    printf("%c",frase2[1]);

    for(i=2; i<= tamanho ;i++){
        if((frase2[i]==' ') && (espaco>2)) {
            x = i+1 ;
            printf("%c",frase2[x]);
            espaco--;
        } else if((frase2[i]==' ')&&(espaco==1)) {
            x = i+1 ;

            while((frase2[x]!=' ') && ( x <= tamanho)) {
                printf("%c",frase2[x]);
                x++;
            }
        } else if((frase2[i]==' ') ) {
                espaco--;
        }
    }
}