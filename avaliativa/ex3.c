#include<stdio.h>

main(){

     float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

   
    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        if (A == B && B == C) {
            printf("E um triangulo equilatero.\n");
        } else if (A == B || A == C || B == C) {
            printf("E um triangulo isosceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Nao e possivel formar um triangulo com esses lados.\n");
    }

    return 0;
}
