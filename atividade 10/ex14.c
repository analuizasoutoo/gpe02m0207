#include<stdio.h>

main(){
    int vetor[10], i, j, temIgual= 0;

     printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verifica se há valores iguais no vetor
    printf("Valores iguais no vetor:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                temIgual = 1; // Existem valores iguais
            }
        }
    }

    // Se não houver valores iguais, exibe uma mensagem
    if (!temIgual) {
        printf("Nenhum valor igual encontrado no vetor.\n");
    }

    return 0;
}