#include<stdio.h>

main(){

     int codigo_cidade, num_veiculos, num_acidentes;
    char estado[3];
    int total_veiculos = 0, total_acidentes_RS = 0, cidades_RS = 0;
    float media_veiculos, media_acidentes_RS;
    int maior_acidentes = 0, menor_acidentes = 0, cod_maior_acidentes, cod_menor_acidentes;

    for (int i = 1; i <= 200; ++i) {
        printf("Cidade %d:\n", i);
        

        printf("Codigo da cidade: ");
        scanf("%d", &codigo_cidade);
        printf("Estado (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);
        printf("Numero de veiculos de passeio em 1992: ");
        scanf("%d", &num_veiculos);
        printf("Numero de acidentes de transito com vitimas em 1992: ");
        scanf("%d", &num_acidentes);

        total_veiculos += num_veiculos;

        if (strcmp(estado, "RS") == 0) {
            total_acidentes_RS += num_acidentes;
            cidades_RS++;
        }

        if (i == 1 || num_acidentes > maior_acidentes) {
            maior_acidentes = num_acidentes;
            cod_maior_acidentes = codigo_cidade;
        }

        if (i == 1 || num_acidentes < menor_acidentes) {
            menor_acidentes = num_acidentes;
            cod_menor_acidentes = codigo_cidade;
        }
    }

    media_veiculos = (float)total_veiculos / 200;

    media_acidentes_RS = (float)total_acidentes_RS / cidades_RS;

    printf("\na) Maior indice de acidentes: Cidade %d com %d acidentes\n", cod_maior_acidentes, maior_acidentes);
    printf("   Menor indice de acidentes: Cidade %d com %d acidentes\n", cod_menor_acidentes, menor_acidentes);
    printf("b) Media de veiculos nas cidades brasileiras: %.2f veiculos\n", media_veiculos);
    printf("c) Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f acidentes\n", media_acidentes_RS);

    return 0;
}