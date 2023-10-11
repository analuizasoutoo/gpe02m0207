#include<stdio.h>

main(){
    int v[10], v1[10], v2[10], cont1 = 0, cont2 = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Separa os valores ímpares para v1 e os valores pares para v2
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            v1[cont1] = v[i];
            cont1++;
        } else {
            v2[cont2] = v[i];
            cont2++;
        }
    }

    // Exibe os elementos utilizados de v1
    printf("Elementos utilizados de v1 (ímpares):\n");
    for (int i = 0; i < cont1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n");

    // Exibe os elementos utilizados de v2
    printf("Elementos utilizados de v2 (pares):\n");
    for (int i = 0; i < cont2; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}