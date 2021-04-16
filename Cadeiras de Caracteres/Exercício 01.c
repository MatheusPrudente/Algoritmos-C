/*
Faça um programa para criptografar uma frase dada pelo usuário,
 dado que a criptografia deverá inverter cada palavra da frase.

Exemplo:

Entrada: EU ESTOU NA ESCOLA

Saída: UE UOTSE AN ALOCSE*/


# include "stdio.h"
# include "string.h"



void main () {
	
	char frase1[100];
	char frase2[105];
	
	int i = 0 ;
	int espaco = 0;
	
	
	printf("Entrada :  ");
	gets(frase1);
	
	for (i = 0; i <= strlen(frase1);i++){
   
   		char caractere   = frase1 [i];
		    
		    if (caractere  == ' '){
		    	espaco++;
		}
	}
	    
		
	int x = 0;
	int j = 0;
	int tamanho = strlen(frase1); 
	
	// uma palavra so 
		if (espaco == 0){
			
			strcat(frase2,	strrev(frase1));
			
		}
	
	
	
	else {
		
  		frase2[0]=' ';   
		                 
        for(i=0;i<tamanho;i++){
        	
		frase2[i+1]=frase1[i];
		}
        
        
        frase2[tamanho+1]='.'; 
		              
        for(i=1; i<=tamanho+1 ;i++){ 
		         
            if(frase2[i]==' ' || frase2[i]=='.'){  
                x = i-1;                  
                while(frase2[x]!=' '){ 
                    printf("%c",frase2[x]); 
                    x--;              
                }
                printf(" ");        
            }
        }
			}
			
		
  			
		
		
	}




