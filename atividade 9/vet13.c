#include<stdio.h>

main(){

     int vetor[5], maior, menor, pMaior, pMenor= 0;

     for(int i = 0; i < 5; i++){
         printf("Inserir os valores");
         scanf("%d", &vetor[i]);
     }

     maior = vetor[0];
     menor = vetor[0];

     for(int i = 0; i < 5; i++){
        if(vetor[i]> maior){
            maior = vetor[i];
            pMaior = i;

        }
        if(vetor[i] < menor){
            menor = vetor[i];

        }
     }

     printf("|n Maior:%d - Posicao %d \n Menor: %d - Posicao  %d", maior, menor, Pmaior, pMenor);
     


}
