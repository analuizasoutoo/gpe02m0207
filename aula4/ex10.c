#include<stdio.h>

main(){

    //variaveis
    float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, porcentagemVendas = 0.05;

    printf("Digite quantos carros vendeu:");
    scanf("%f", &numCarros);

    printf("Digite o total das vendas:");
    scanf("%f", &totalVendas);

    printf("Digite o salarioFixo:");
    scanf("%f", &salarioFixo);

    printf("Comissao por carro vendido:");
    scanf("%f", &valorPorCarro);

    salarioFinal = (valorPorCarro * numCarros) + (totalVendas * porcentagemVendas) + salarioFixo;

    printf("O salario  final e: R$%.2f", salarioFinal);




    




}