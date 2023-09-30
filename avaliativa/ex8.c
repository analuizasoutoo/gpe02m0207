#include<stdio.h>

main(){
     
     float salario, num_filhos;
    float soma_salario = 0, soma_filhos = 0;
    float maior_salario = 0;
    int contador_ate_100 = 0, num_pessoas = 0;

    do {
    
        printf("Digite o salario (ou um numero negativo para encerrar): R$");
        scanf("%f", &salario);


        if (salario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%f", &num_filhos);

            soma_salario += salario;
            soma_filhos += num_filhos;
            num_pessoas++;


            if (salario > maior_salario) {
                maior_salario = salario;
            }

            
            if (salario <= 100.0) {
                contador_ate_100++;
            }
        }
    } while (salario >= 0);

    
    if (num_pessoas > 0) {
        
        float media_salario = soma_salario / num_pessoas;
        float media_filhos = soma_filhos / num_pessoas;

        
        float percentual_ate_100 = (float)contador_ate_100 / num_pessoas * 100;

        
        printf("a) Media do salario da populacao: R$%.2f\n", media_salario);
        printf("b) Media do numero de filhos: %.2f\n", media_filhos);
        printf("c) Maior salario: R$%.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salario até R$100,00: %.2f%%\n", percentual_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}