/*
 Faça Um programa que  receba  como  entrada  três  valores  e  os  imprima  em  ordem crescente.
*/

#include "stdio.h"

void main() {
    int num1;
    int num2;
    int num3;

    printf(" Digite o primeiro numero\n");
    scanf("%d",&num1);

    printf(" Digite o segundo numero\n");
    scanf("%d",&num2);

    printf(" Digite o terceiro numero\n");
    scanf("%d",&num3);

    if(num1 <= num2 && num2<= num3 && num1<num3){
        printf("%d %d %d",num1,num2,num3);
    } else if(num1 <= num3 && num3 <= num2 && num1<num2){
        printf("%d %d %d",num1,num3,num2);
    } else if(num2<= num1 && num1 <= num3 && num2< num3){
        printf("%d %d %d",num2,num1,num3);
    } else if(num2<= num3 && num3 <= num1 && num2 < num1){
        printf("%d %d %d",num2,num3,num1);
    } else if(num3<= num2 && num2<= num1 && num3 < num1){
        printf("%d %d %d",num3,num2,num1);
    } else if(num3<= num1 && num1<= num2 && num3 < num2){
        printf("%d %d %d",num3,num1,num2);
    }
}
