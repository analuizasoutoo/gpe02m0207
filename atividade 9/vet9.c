#include<stdio.h>

main(){
     int vetor[6];

      printf("Digite 6 numeros inteiros pares:\n");
    for (i = 0; i < 6; i++) {
        do {
            scanf("%d", &numeros[i]);
            // Verifica se o número é par
            if (numeros[i] % 2 != 0) {
                printf("Por favor, digite um numero par.\n");
            }
        }while (numeros[i] % 2 != 0);

        
    }
      printf("Valores lidos na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

     printf("\n");

    return 0;
    
}