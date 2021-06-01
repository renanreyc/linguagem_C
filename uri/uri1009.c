/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main() 
{
    char nome[21];
    double salarioFixo,vendas,salarioFinal,comissao;
    scanf("%s",nome);
    scanf("%lf %lf",&salarioFixo,&vendas);
    comissao = vendas *0.15;
    salarioFinal = salarioFixo + comissao;
    
    printf("TOTAL = R$ %.2lf\n",salarioFinal);
 
    return 0;
}