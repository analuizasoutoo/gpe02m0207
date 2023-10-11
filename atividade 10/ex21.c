#include<stdio.h>

main(){
     int A[10], B[10], C[10], i;

     printf("Digite 10 números inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    // Lê os valores para o vetor B
    printf("Digite 10 números inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    // Calcula o vetor C = A - B
    for (i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    // Exibe os dados do vetor C
    printf("Vetor C (C = A - B):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}