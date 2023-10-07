#include<stdio.h>

main(){
    int numPessoas = 10, numHomens = 0, numMulheres = 0;
    float alturaHomens = 0, alturaMulheres = 0, alturaTotal = 0,  pesoHomens = 0, pesoMulheres = 0, pesoTotal = 0;

     for (int i = 1; i <= numPessoas; i++) {
        char sexo;
        char nome[50];
        float altura, peso;

        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", nome);

        printf("Digite o sexo da pessoa %d (M/m para masculino, F/f para feminino): ", i);
        scanf(" %c", &sexo);

        printf("Digite a altura da pessoa %d (em metros): ", i);
        scanf("%f", &altura);

        printf("Digite o peso da pessoa %d (em quilos): ", i);
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            alturaHomens += altura;
            pesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            alturaMulheres += altura;
            pesoMulheres += peso;
        } else {
            printf("Sexo inválido. Por favor, use M/m para masculino ou F/f para feminino.\n");
            i--;
            continue;
        }

        alturaTotal += altura;
        pesoTotal += peso;
    }
}