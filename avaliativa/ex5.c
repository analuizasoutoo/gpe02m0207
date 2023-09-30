#include<stdio.h>

main(){

     float x1, y1, x2, y2, distancia;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos e: %.4f\n", distancia);

    return 0;
}