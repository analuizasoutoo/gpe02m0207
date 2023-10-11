#include<stdio.h>

main(){
    float vetor[5];
    int codigo, i;

    printf("Digite 5 números reais:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    // Lê o código
    printf("Digite um código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    // Executa a ação com base no código
    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            break;
        default:
            printf("Código inválido.\n");
            break;
    }

    return 0;
}