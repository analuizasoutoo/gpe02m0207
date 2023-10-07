#include<stdio.h>

main(){
     char opcao;
    do {
        int mes, ano, dias;

        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mês inválido.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            // É um ano bissexto
            int diasNoMes[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            dias = diasNoMes[mes];
        } else {
            // Não é um ano bissexto
            int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            dias = diasNoMes[mes];
        }

        printf("O mês %d/%d possui %d dias.\n", mes, ano, dias);

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}