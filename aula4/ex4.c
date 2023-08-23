#include<stdio.h>

main(){

//variaveis 
float reais, cotacaoDolar, valorDolar;

printf("Digite o valor em reais");
scanf("%f", &reais);

printf("Digite o valor do dolar");
scanf("%f", cotacaoDolar);

valorDolar= reais/cotacaoDolar;

printf("O valor em dolar e: %.2f", valorDolar);

}