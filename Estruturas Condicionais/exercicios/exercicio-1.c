/*
    Faça  um  programa que  verifique  a validade  de uma  senha
    fornecida  pelo  usuário.  A senha é 4531. O programa deve mostrar uma
    mensagem de permissão de acesso ou não.
*/

#include "stdio.h"

int main() {
    int senha;
    printf("Digite a senha para a verificação\n");
    scanf("%d",&senha);

    if(senha == 4531){
        printf("Entrada permitida\n");
    } else{
        printf("Senha invalida\n");
    }
}
