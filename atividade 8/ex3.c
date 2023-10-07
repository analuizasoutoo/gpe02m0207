#include<stdio.h>

main(){
     int n, primeiro = 0, segundo = 1, proximo;

    printf("Digite um número inteiro (maior ou igual a zero): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número inteiro maior ou igual a zero.\n");
    } else if (n == 0) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, primeiro);
    } else if (n == 1) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, segundo);
    } else {
        for (int i = 2; i <= n; i++) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, proximo);
    }

    return 0;
}