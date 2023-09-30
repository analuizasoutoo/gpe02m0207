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
        if ((A * A == B * B + C * C) || (B * B == A * A + C * C) || (C * C == A * A + B * B)) {
            printf("E um triangulo retangulo.\n");
        }
        
        else if ((A * A > B * B + C * C) || (B * B > A * A + C * C) || (C * C > A * A + B * B)) {
            printf("E um triangulo obtusangulo.\n");
        }
        
        else {
            printf("E um triangulo acutangulo.\n");
        }
    } else {
        printf("Nao e possivel formar um triangulo com esses lados.\n");
    }

    return 0;
}