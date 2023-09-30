#include<stdio.h>
#include<math.h>

main(){

    float x, fx;

    printf("Digite o valor de x:");
    scanf("%f", &x);

    if(x * x - 16 > 0){
        fx= (5 * x + 3) / sqrt(x * x - 16);
        printf("O valor de f(x) e: %f\n", fx);

    }else{
        printf("Erro; x^2 - 16 nao pode ser negativo ou igual a zero!\n");

    }
    return 0;


}