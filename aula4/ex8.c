#include<stdio.h>

main(){

    //variaveis 
    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual");
    scanf("%lf", &salarioAtual);

    printf("Digite a porcentagem de reajuste");
    scanf("%f", &porcentagemReajuste);

    reajusteFinal= porcentagemReajuste/100;

    //novo salario
    novoSalario= (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);




}