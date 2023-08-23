#include<stdio.h>

main(){

//variaveis
float  custoFabrica, distribuidor = 0.28, imposto = 0.45, custoFinal;

printf("Custo de fabrica:");
scanf("%f", &custoFabrica);

custoFinal = (custoFabrica * distribuidor) * (custoFabrica * imposto) + custoFabrica;

printf("Custo final do veiculo: R$%.2f", custoFinal);


}