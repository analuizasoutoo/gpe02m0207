#include<stdio.h>

main(){

    int vetor[10], maior, posicao;

    printf("Digite 10 numeros inteiros\n");
     for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
     }
     maior = vetor[0];
     posicao = 0; 
        for(i = 1; i < 10; i++){
            if(vetor[i] > maior){
                 maior = vetor[i];
                 posicao = i;
            }

    printf("Vetor informado:\n");
        for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
            }
        }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicao);

    return 0;


}