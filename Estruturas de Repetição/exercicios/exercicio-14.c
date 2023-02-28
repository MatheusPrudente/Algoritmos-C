/*
    Faça um programa que leia e valide as seguintes informações :

    Nome: maior que 3 caracteres;
    Idade: entre 0 e 150;
    Salário: maior que zero;
    Sexo: 'f' ou 'm';
    Estado Civil: 's', 'c', 'v', 'd';
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"


void main() {
    char nome[60];
    int idade = 0;
    float salario = 0;
    char sexo;
    char estado_civil;

    int i,n,s1,s2,ec,tamanho_nome = 0;

    while(i <1) {
        printf("Digite seu nome: ");
        scanf("%s",nome);

        tamanho_nome = strlen (nome);

        if(tamanho_nome <3){
            printf("nome invalido\n");
        } else {
            i++;
        }
    }

    while(n<1){
        printf("Digite sua idade: ");
        scanf("%d",&idade);

        if( idade <= 0 || idade > 150){
            printf("idade invalida\n");
        } else{
            n++;
        }
    }

    while(s1<1) {
        printf("Digite seu salario: ");
        scanf("%f",&salario);


        if(salario<=0){
            printf("salario invalido\n");
        } else {
            s1++;
        }
    }

    while(s2<1) {
        printf("\nDigite seu sexo \n(m para masculino e f para feminino): ");
        scanf("%s",&sexo);

        if(sexo !='m' && sexo !='f'){
            printf("sexo invalido\n");
        } else {
            s2++;
        }
    }

    while(ec<1) {
        printf("\nDigite seu estado civil:\n\nc para casado\ns para solteiro\nv para viuvo\nd para divorciado\n");
        scanf("%s",&estado_civil);

        if(estado_civil !='s' && estado_civil !='c' && estado_civil !='v' && estado_civil !='d'){
            printf("estado civil invalido\n");
        } else {
            ec++;
        }
    }

    printf("O nome armazenado foi: %s\n", nome);
    printf("A idade armazenado foi: %d\n", idade);
    printf("O sexo armazenado foi: %c\n", sexo);
    printf("O estado_civil armazenado foi: %c\n", estado_civil);
    printf("O salario armazenado foi: %.2f\n", salario);
}