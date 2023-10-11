#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vetor[10];

    // Lê os números inteiros e armazena no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verifica e exibe os números primos e suas posições no vetor
    printf("Números primos e suas posições no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Número primo: %d, Posição: %d\n", vetor[i], i);
        }
    }

    return 0;
}