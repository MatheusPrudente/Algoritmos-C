/*
    Uma empresa decidiu dar uma gratificação de natal aos seus funcionários,
    baseada no número de horas extras e no número de horas que o funcionário
    faltou ao trabalho. O valor do prémio é obtido pela consulta na tabela a
    seguir, em que: H = ((número de horas extras) –(2/3 * (número de horas-falta)))
*/

#include “stdio.h”


void main() {
    float gratificacao;
    float hora_extra;
    float hora_falta;
    float H;

    printf("Digite quantas horas extras foram feitas pelo funcionario\n");
    scanf("%f",&hora_extra);

    printf("Digite quantas horas foram faltadas pelo funcionario\n");
    scanf("%f",&hora_falta);
    H = ((hora_extra)-(2/3 * (hora_falta)));

    if(H>2400){
        gratificacao = 500.00;
        printf("%.2f",gratificacao);
    } else if(H<=2400 && H>=1800){
    gratificacao = 400.00;
    printf("%.2f",gratificacao);
    } else if(H <1800 && H>=1200){
        gratificacao = 300.00;
        printf("%.2f",gratificacao);
    } else if(H <1200 && H>600){
        gratificacao = 200.00;
        printf("%.2f",gratificacao);
    } else {
        gratificacao = 100.00;
        printf("%.2f",gratificacao);
    }
}
