#include<stdio.h>

main(){

     int voto, total_candidato1 = 0, total_candidato2 = 0, total_candidato3 = 0, total_candidato4 = 0;
    int total_nulos = 0, total_brancos = 0;

    printf("Digite o codigo do candidato (1 a 4), 5 para voto nulo, 6 para voto em branco ou 0 para encerrar: ");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                total_candidato1++;
                break;
            case 2:
                total_candidato2++;
                break;
            case 3:
                total_candidato3++;
                break;
            case 4:
                total_candidato4++;
                break;
            case 5:
                total_nulos++;
                break;
            case 6:
                total_brancos++;
                break;
            case 0:
                break;
            default:
                printf("Codigo invalido. Tente novamente.\n");
                break;
        }

        if (voto != 0) {
            printf("Digite o proximo voto ou 0 para encerrar: ");
        }

    } while (voto != 0);

    printf("Total de votos para o candidato 1: %d\n", total_candidato1);
    printf("Total de votos para o candidato 2: %d\n", total_candidato2);
    printf("Total de votos para o candidato 3: %d\n", total_candidato3);
    printf("Total de votos para o candidato 4: %d\n", total_candidato4);
    printf("Total de votos nulos: %d\n", total_nulos);
    printf("Total de votos em branco: %d\n", total_brancos);

    return 0;
}