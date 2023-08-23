#include<stdio.h>

main(){

//declaracao
int num1, num2, soma, mult;
float sub, div;

//entrada de dados 
printf("Digite o primeiro numero");
scanf("%d", &num1);

printf("Digite o segundo numero");
scanf("%d", &num2);

//operacoes

soma= num1 + num2;
mult= num1 * num2;
sub= (float)num1 - num2;
div=(float)num1 / num2;

//resultados

printf("\nSoma: %d", soma);
printf("\nMultiplicacao:%d", mult);
printf ("\nSubtracao: %.2f", sub);
printf("\nDivisao: %.2f", div);

}