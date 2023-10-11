#include<stdio.h>

main(){
    int vetor[100], contador = 0, numero = 1;

     while (contador < 100) {
        if (numero % 7 == 0 || numero % 10 == 7) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    // Exibe os números no vetor
    printf("Os 100 primeiros naturais que são múltiplos de 7 ou terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n"); // Quebra de linha a cada 10 números
        }
    }

    return 0;
}