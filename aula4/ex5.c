#include<stdio.h>

main(){

    //variaveis
    float custo, frete, despesa, valorBruto, valorVenda, lucro;

    printf("Digite o custo do produto");
    scanf("%f", &custo);

    printf("Digite o frete");
    scanf("%f", frete);

    printf("Digite a dispesa");
    scanf("%f", despesa);

    //valor bruto

    valorBruto= custo + frete + despesa;

    //valor bruto usuario

    printf("O valor bruto do prduto e: R$%.2f . Digite o valor da venda");
    scanf("%f",&valorVenda);

    //lucro
    lucro= ((valorVenda - valorBruto)* 100)/valorBruto;

    //apresentacao
    printf("Sua porcentagem de lucro e: %.2f", lucro);


}