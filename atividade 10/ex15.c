#include<stdio.h>

main(){
    int vetor[20], i, j, k, tamanho= 20;

     printf("Digite 20 números:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Remove elementos repetidos
    for (i = 0; i < tamanho; i++) {
        for (j = i + 1; j < tamanho;) {
            if (vetor[i] == vetor[j]) {
                // Se encontrar um elemento repetido, move os elementos à frente
                for (k = j; k < tamanho - 1; k++) {
                    vetor[k] = vetor[k + 1];
                }
                tamanho--; // Reduz o tamanho do vetor
            } else {
                j++;
            }
        }
    }

    // Imprime o vetor sem elementos repetidos
    printf("Elementos do vetor sem repetição:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}