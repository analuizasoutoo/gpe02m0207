#include<stdio.h>

main(){
    int N;

    printf("Digite um numer inteiro N:");
    scanf("%d", &N);

    int numero = 1;

    for(int x = 0; x < N; x++){
        printf("%d", numero);
        numero += 2;
    }

    return 0;
}