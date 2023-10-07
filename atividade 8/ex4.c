#include<stdio.h>

main(){
      int numero, i;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    printf("Os divisores de %d são: ", numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}