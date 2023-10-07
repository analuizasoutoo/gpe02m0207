#include<stdio.h>

main(){
     int capacidade = 100, idade, contador_otimo =0, contador_bom = 0, contador_regular = 0, contador_ruim = 0,
     contador_pessimo = 0, soma_idade_ruim = 0, maior_idade_otimo = 0, maior_idade_ruim = 0;
    char opiniao;

    for (int i = 0; i < capacidade; i++) {
        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);
        
        printf("Digite a opinião do espectador %d (A/B/C/D/E): ", i + 1);
        scanf(" %c", &opiniao);

        switch(opiniao) {
            case 'A':
                contador_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                contador_bom++;
                break;
            case 'C':
                contador_regular++;
                break;
            case 'D':
                contador_ruim++;
                soma_idade_ruim += idade;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                contador_pessimo++;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            default:
                printf("Opção inválida. Por favor, escolha A, B, C, D ou E.\n");
                i--;
        }
    }

    float diferenca_bom_regular = ((float) contador_bom - contador_regular) / capacidade * 100;
    float media_idade_ruim = contador_ruim > 0 ? (float) soma_idade_ruim / contador_ruim : 0;
    float percentual_pessimo = (float) contador_pessimo / capacidade * 100;
    int diferenca_idade = maior_idade_otimo - maior_idade_ruim;

    printf("\nQuantidade de respostas ótimo: %d\n", contador_otimo);
    printf("Diferença percentual entre respostas bom e regular: %.2f%%\n", diferenca_bom_regular);
    printf("Média de idade das pessoas que responderam ruim: %.2f\n", media_idade_ruim);
    printf("Percentagem de respostas péssimo: %.2f%%\n", percentual_pessimo);
    printf("Maior idade que respondeu péssimo: %d\n", maior_idade_ruim);
    printf("Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d\n", diferenca_idade);

    return 0;

}