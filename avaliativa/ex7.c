#include<stdio.h>

main(){

     int numAlunos = 30;
    float n1, n2, n3, mp, mediaGeral = 0;

    for (int i = 1; i <= numAlunos; ++i) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i);
        scanf("%f %f %f", &n1, &n2, &n3);

        mp = (n1 * 2 + n2 * 4 + n3 * 4) / 10;

        mediaGeral += mp;

        printf("Media do aluno %d: %.2f - ", i, mp);

        if (mp >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    mediaGeral /= numAlunos;
    printf("Media geral da turma: %.2f\n", mediaGeral);

    return 0;
}