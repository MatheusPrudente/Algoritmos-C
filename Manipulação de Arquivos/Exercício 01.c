/*Faça um programa para criar um arquivo chamado VENDAS.DAT, 
onde cada registro será composto pelos seguintes campos: 
código_vendedor, nome_vendedor, valor_venda e mês. O programa deve:

Permitir incluir um vendedor no arquivo, lembrando que não podem existir dois vendedores com o mesmo código e mesmo mês de vendas. X
Permitir a alteração do valor de uma venda no arquivo. X
Permitir a consulta do valor da venda de um vendedor em um determinado mês no arquivo.
Permitir a consulta do total das vendas de um determinado vendedor do arquivo.
Permitir consultar o nome e o código do vendedor que mais vendeu e um determinado mês no arquivo.*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct tipo_venda{
   	int codigo_vendedor;
   	char nome_vendedor[50];
    int mes_venda;
	float  valor_venda;
} venda;

long calcularTamanhoArquivo(char *nome_arq) {
 	FILE *arq;
	arq = fopen(nome_arq, "a+b");
    long posicaoAtual = ftell(arq);
    long tamanho;
    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);
    fseek(arq, posicaoAtual, SEEK_SET);
    return tamanho;
}


void cadastrarNovoVendedor(char *nome_arq) {
	FILE *arq;
	arq = fopen(nome_arq, "a+b");
	int encontrado = 10;
	venda nova_venda;
		do {	
		printf(" Informe o codigo do vendedor : ");
		scanf("%d", &nova_venda.codigo_vendedor);
		printf(" Informe o nome do vendedor : ");
		fflush(stdin);
		gets(nova_venda.nome_vendedor);
		printf(" Informe o mes da venda : ");
		scanf("%d", &nova_venda.mes_venda);
		printf(" Informe o valor da venda : ");
		scanf("%f", &nova_venda.valor_venda);
			if(calcularTamanhoArquivo(nome_arq)>0){
			encontrado = procuraVenda(nome_arq,nova_venda.nome_vendedor,nova_venda.codigo_vendedor,nova_venda.mes_venda);
				if (encontrado == 1){
				printf("\n----- Venda ja cadastrada -----\n\n");	
					}else if (encontrado == 2){
						printf("\n----- Mes ja cadastrado -----\n\n");
					}else if (encontrado == 3){	
					printf("\n----- Codigo errado -----\n\n");		
				}	
			}else{
				encontrado = -1;
			}	
	}while(encontrado > 0);
	fwrite(&nova_venda, sizeof(venda),1, arq);
	printf("\nVenda do Vendedor [%d] cadastrada com sucesso!\n", nova_venda.codigo_vendedor);
	fclose(arq);		
	printf("\nDigite qualquer tecla para continuar...");
    getch();
}

int procuraVenda(char *nome_arq, char *nome_proc,int codigo_proc, int mes_proc) {
    FILE *arq;
    arq = fopen(nome_arq, "r+b");
    venda venda_lida;
    int encontrado = 0;
    do {
        fread(&venda_lida, sizeof(venda), 1, arq);
        if ((venda_lida.codigo_vendedor == codigo_proc) && (venda_lida.mes_venda == mes_proc)){
        	//cadastra mesmo vendedor, no mesmo mes
             return 1;
        } else if ((venda_lida.codigo_vendedor != codigo_proc) && (venda_lida.mes_venda == mes_proc)){
        	//cadastra vendedor diferente, no mesmo mes
			return 2; 
		}else if ((venda_lida.codigo_vendedor == codigo_proc) &&(strcmp (venda_lida.nome_vendedor, nome_proc) != 0)){
			    //cadastra codigo do vendedor, com nome errado
			return 3;
		}	
    } while(!feof(arq));
    fclose(arq);
    return -1;
}

void alterarValorDaVenda(char *nome_arq){
	printf("Digite o mes da venda : ");
    int mes_proc;
    scanf("%d", &mes_proc);
    FILE *arq = fopen(nome_arq, "rb+");
    venda venda_lida;
    int posicao = 0, encontrado = 0;
		    if(calcularTamanhoArquivo(nome_arq)>0){
				do {	
					fread(&venda_lida, sizeof(venda), 1, arq);
					if ((venda_lida.mes_venda == mes_proc)) {
				 		encontrado = 1;
				  	} else {posicao++;
			    }
			    } while(!feof(arq) && !encontrado);
		    if (encontrado) {
			    printf("\n----- Venda -----\n\n");
			    printf(" Codigo: %d\n", venda_lida.codigo_vendedor);
			    printf(" Nome : %s\n", venda_lida.nome_vendedor);
			    printf(" Mes : %d\n", venda_lida.mes_venda);
			    printf(" Valor: %.2f\n", venda_lida.valor_venda);
			    float novo_valor = 0; 
				    do {
						printf("\nInforme o novo valor da venda :  ");
						fflush(stdin);
						scanf("%f", &venda_lida.valor_venda);
						novo_valor = venda_lida.valor_venda;
					}while(novo_valor==0);
				fseek(arq, 0, SEEK_SET);
			    fseek(arq, posicao*sizeof(venda), SEEK_CUR);
			    fwrite(&venda_lida, sizeof(venda), 1, arq);
			    printf("\n----- Valor alterado com sucesso! -----\n\n");
			    fclose(arq);
		   	 } else {
		    printf("\n----- Venda nao encontrada -----");
		    }
		}else {
    printf("\n----- Nao ha registros -----");
	
    printf("\nDigite qualquer tecla para continuar...");
    getch();
	
}
}

void consultarValorDaVendaPorMes(char *nome_arq){
	printf(" Digite o codigo do vendedor : ");
    int codigo_proc;
    scanf("%d", &codigo_proc);
    printf(" Digite o mes da venda : ");
  	int mes_proc;
    scanf("%d", &mes_proc); 
    FILE *arq = fopen(nome_arq, "rb+");
    venda venda_lida;
    int posicao = 0, encontrado = 0;
	    do {
	        fread(&venda_lida, sizeof(venda), 1, arq);
	        if ((venda_lida.codigo_vendedor == codigo_proc) && (venda_lida.mes_venda == mes_proc)) {
	            encontrado = 1;
	        } else {
	            posicao++;
	        }
	    } while(!feof(arq) && !encontrado);
    if (encontrado) {
        printf("\n----- Venda -----\n\n");
        printf(" Codigo: %d\n", venda_lida.codigo_vendedor);
        printf(" Nome : %s\n", venda_lida.nome_vendedor);
        printf(" Mes : %d\n", venda_lida.mes_venda);
        printf(" Valor: %.2f\n", venda_lida.valor_venda);
       	fseek(arq, 0, SEEK_SET);
        fclose(arq);
    } else {
        printf("\n----- Venda nao encontrada -----");
    }
    printf("\nDigite qualquer tecla para continuar...");
    getch();
}

void consultarValorTotalDaVenda(char *nome_arq){ 
	float venda_total = 0.000 ;
	char nome[50];
	venda venda_lida;
	printf(" Digite o codigo do vendedor : ");
    int codigo_proc;
    scanf("%d", &codigo_proc);
    FILE *arq = fopen(nome_arq, "rb+");
	if(calcularTamanhoArquivo(nome_arq)>0){
	fseek(arq, 0, SEEK_SET);
	int posicao = 0, encontrado = 0;
		while(!feof(arq)){
		fread(&venda_lida, sizeof(venda), 1, arq);
			if ((venda_lida.codigo_vendedor == codigo_proc) && !feof(arq)) { // PS: tive que colocar a mesma condição do que loop, pois acabava rodando mais vezes, por exemplo : tenho dois registros, mas roda tres vezes;
				printf("\n----- Venda -----\n\n");
				printf(" Codigo: %d\n", venda_lida.codigo_vendedor);
				printf(" Nome : %s\n", venda_lida.nome_vendedor);
				printf(" Mes: %d\n",venda_lida.mes_venda);
				printf(" Valor: %.2f\n",venda_lida.valor_venda);
				venda_total = venda_total+venda_lida.valor_venda;
				strcpy(nome,venda_lida.nome_vendedor);
				encontrado++;}} 
					if (encontrado) {
						fflush(stdout);
						printf("\n\n----- Total de Vendas -----\n\n");
						printf(" Codigo: %d\n",codigo_proc);
						printf(" Nome : %s\n",nome);
						printf(" Valor: %.2f\n",venda_total );
						fseek(arq, 0, SEEK_SET);
						fclose(arq);
						} else {
		printf("\n----- Funcionario nao registrado -----");
		}
	}else {
	printf("\n----- Nao ha registros -----");
	}
    printf("\nDigite qualquer tecla para continuar...");
    getch();	
}

void consultarMaiorVenda(char *nome_arq){ 
	float maior_venda = 0.000;
	char nome[50];
	int mes = 0;
	int codigo = 0;
	venda venda_lida;
    FILE *arq = fopen(nome_arq, "rb+");
	if(calcularTamanhoArquivo(nome_arq)>0){
		fseek(arq, 0, SEEK_SET);
		while(!feof(arq)){
		fread(&venda_lida, sizeof(venda), 1, arq);
			if ((venda_lida.valor_venda > maior_venda) && !feof(arq)) { // PS: tive que colocar a mesma condição do que loop, pois acabava rodando mais vezes, por exemplo : tenho dois registros, mas roda tres vezes;
				codigo = venda_lida.codigo_vendedor;
				strcpy(nome,venda_lida.nome_vendedor);
				maior_venda = venda_lida.valor_venda;
				mes = venda_lida.mes_venda;}
			} 
		printf(" Codigo: %d\n",codigo);
		printf(" Nome : %s\n",nome);
		printf(" Mes : %d\n",mes);
		printf(" Valor: %.2f\n",maior_venda );
		fseek(arq, 0, SEEK_SET);
		fclose(arq);
	
	}else {
	printf("\n----- Nao ha registros -----");
	}
    printf("\nDigite qualquer tecla para continuar...");
    getch();	
}

void consultarTodaVenda(char *nome_arq){ 
	venda venda_lida;
    FILE *arq = fopen(nome_arq, "rb+");
	if(calcularTamanhoArquivo(nome_arq)>0){
	fseek(arq, 0, SEEK_SET);
	while(!feof(arq)){
	fread(&venda_lida, sizeof(venda), 1, arq);
		if (!feof(arq)) { // PS: tive que colocar a mesma condição do que loop, pois acabava rodando mais vezes, por exemplo : tenho dois registros, mas roda tres vezes;
			printf("\n----- Venda -----\n\n");
			printf(" Codigo: %d\n",venda_lida.codigo_vendedor);
			printf(" Nome : %s\n",venda_lida.nome_vendedor);
			printf(" Nome : %d\n",venda_lida.mes_venda);
			printf(" Valor: %.2f\n",venda_lida.valor_venda );}
		} 
	fseek(arq, 0, SEEK_SET);
	fclose(arq);
	}else {
	printf("\n----- Nao ha registros -----");
	}
    printf("\nDigite qualquer tecla para continuar...");
    getch();	
}

void main(){
	int opcao;
	char nome_arq[] = "VENDAS.DAT";
		do {
        system("cls");
		printf("----- MENU DE OPCOES -----\n\n");
		printf(" 1. CADASTRAR NOVA VENDA.\n");
        printf(" 2. ALTERAR VALOR DA VENDA.\n");
		printf(" 3. CONSULTAR UMA VENDA DO UM VENDEDOR NO MES.\n");
		printf(" 4. CONSULTAR TOTAL DAS VENDAS DE UM VENDEDOR\n");
		printf(" 5. CONSULTAR VENDEDOR COM MAIOR VENDA\n");
		printf(" 6. TODAS AS VENDAS\n");
		printf(" 7. ENCERRAR PROGRAMA\n\n");
		printf(" Digite a opcao desejada: ");
		fflush(stdin);
		scanf("%d", &opcao);
		if (opcao == 1) {	
            system("cls");
            printf("------ CADASTRO DA VENDA -----\n\n");
			cadastrarNovoVendedor(nome_arq);
		}else if (opcao == 2){	
			system("cls");
			printf("------ ALTERAR VALOR DA VENDA -----\n\n");
			alterarValorDaVenda(nome_arq);
		}else if (opcao == 3){
			system("cls");
			printf("------ CONSULTAR UMA VENDA DE UM VENDEDOR NO MES -----\n\n");
			consultarValorDaVendaPorMes(nome_arq);
		}else if (opcao == 4){
				system("cls");
				printf("------ CONSULTAR TOTAL DAS VENDAS DE UM VENDEDOR -----\n\n");
				consultarValorTotalDaVenda(nome_arq);
		}else if (opcao == 5){
				system("cls");
				printf("------ CONSULTAR MAIOR VENDA -----\n\n");
				consultarMaiorVenda(nome_arq);
			}else if (opcao == 6){
				system("cls");
				printf("------ TODAS AS VENDAS -----\n\n");
				consultarTodaVenda(nome_arq);
			}
		
	} while (opcao != 7);
}
