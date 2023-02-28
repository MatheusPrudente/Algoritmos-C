/*
    O cardápio de uma lanchonete é o seguinte:
    Faça  um  programa  que  leia  o  código  dos  itens  pedidos  e  as  quantidades
    desejadas. Calcule e mostre o valor a ser pago por item (preço * quantidade) e o
    total geral do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/

#include <stdio.h>


void main() {
    int i,qtd,codigo;
    float preco,preco_final;
    char pedido;
    qtd = 0;
    preco_final = 0;


    while (i<1){
        printf("Deseja encerrar o pedido ? s/n\n");
        scanf("%s",&pedido);

        if(pedido == 'n') {
            printf("Informe o codigo do produto\n");
            scanf("%d",&codigo);
            printf("Informe a quantidade do produto\n");
            scanf("%d",&qtd);

            if(codigo == 100){
                preco_final = preco_final + (qtd*8.50);
            } else if (codigo == 101){
                preco_final = preco_final + (qtd*5.00);
            } else if (codigo == 102){
                preco_final = preco_final + (qtd*7.50);
            } else if (codigo == 103){
                preco_final = preco_final + (qtd*10.20);
            } else if (codigo == 104){
                preco_final = preco_final + (qtd*12.30);
            } else if (codigo == 105){
                preco_final = preco_final + (qtd*4.00);
            } else {
                printf("codigo invalido");
            }
        } else{
            i++;
        }
    }
    printf("O valor total eh %.2f",preco_final);
}
