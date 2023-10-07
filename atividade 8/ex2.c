#include<stdio.h>

main(){
    int total_usuarios = 50, contador_elevador_A = 0, contador_elevador_B = 0, contador_elevador_C = 0, contador_matutino = 0, contador_vespertino = 0, contador_noturno = 0;
     char elevador, periodo;

    for (int i = 0; i < total_usuarios; i++) {
        printf("Para o usuário %d:\n", i + 1);
        printf("Qual elevador você utiliza mais frequentemente (A/B/C)? ");
        scanf(" %c", &elevador);

        printf("Qual período você utiliza o elevador (M/V/N)? ");
        scanf(" %c", &periodo);

        switch(elevador) {
            case 'A':
                contador_elevador_A++;
                break;
            case 'B':
                contador_elevador_B++;
                break;
            case 'C':
                contador_elevador_C++;
                break;
            default:
                printf("Elevador inválido. Por favor, escolha A, B ou C.\n");
                i--;
                continue;
        }

        switch(periodo) {
            case 'M':
                contador_matutino++;
                break;
            case 'V':
                contador_vespertino++;
                break;
            case 'N':
                contador_noturno++;
                break;
            default:
                printf("Período inválido. Por favor, escolha M, V ou N.\n");
                i--;
        }
    }

    char periodo_mais_usado;
    if (contador_matutino >= contador_vespertino && contador_matutino >= contador_noturno) {
        periodo_mais_usado = 'M';
    } else if (contador_vespertino >= contador_matutino && contador_vespertino >= contador_noturno) {
        periodo_mais_usado = 'V';
    } else {
        periodo_mais_usado = 'N';
    }

    char elevador_mais_frequentado;
    if (contador_elevador_A >= contador_elevador_B && contador_elevador_A >= contador_elevador_C) {
        elevador_mais_frequentado = 'A';
    } else if (contador_elevador_B >= contador_elevador_A && contador_elevador_B >= contador_elevador_C) {
        elevador_mais_frequentado = 'B';
    } else {
        elevador_mais_frequentado = 'C';
    }

    int total_periodos = contador_matutino + contador_vespertino + contador_noturno;
    float diferenca_percentual = ((float)(total_periodos - contador_noturno) / total_periodos) * 100;
    float percentagem_elevador_media = ((float) (total_usuarios - contador_elevador_A - contador_elevador_B - contador_elevador_C) / total_usuarios) * 100;

    printf("\nPeríodo mais usado de todos: %c (Elevador %c)\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("Elevador mais frequentado: %c (Período %c)\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);
    printf("Percentagem do elevador de média utilização sobre o total de serviços prestados: %.2f%%\n", percentagem_elevador_media);

    return 0;


}