#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validaSexo(char sexo) {
    if (sexo == 'M' || sexo == 'F') {
        return 1; // Sexo válido
    } else {
        return 0; // Sexo inválido
    }
}

int validaSalario(float salario) {
    if (salario > 1.0) {
        return 1; // Salário válido
    } else {
        return 0; // Salário inválido
    }
}

void classificaSalario(float salario, char *classificacao) {
    float salarioMinimo = 1400.0;

    if (salario > salarioMinimo) {
        strcpy(classificacao, "Acima do salário mínimo");
    } else if (salario < salarioMinimo) {
        strcpy(classificacao, "Abaixo do salário mínimo");
    } else {
        strcpy(classificacao, "Igual ao salário mínimo");
    }
}

void mostraClassifica(float salario, char sexo) {
    char classificacao[50];
    classificaSalario(salario, classificacao);

    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação: %s\n", classificacao);
    if (sexo == 'M') {
        printf("Sexo: Masculino\n");
    } else {
        printf("Sexo: Feminino\n");
    }
    printf("---------------------------\n");
}

int main() {
    int quantidadeAbaixo = 0;
    int quantidadeAcima = 0;
    char sexo;
    float salario;

    while (1) {
        printf("Digite o sexo (M para masculino, F para feminino) ou X para sair: ");
        scanf(" %c", &sexo);
        if (sexo == 'X' || sexo == 'x') {
            break;
        }
        if (validaSexo(sexo)) {
            printf("Digite o salário em reais: ");
            scanf("%f", &salario);
            if (validaSalario(salario)) {
                mostraClassifica(salario, sexo);
                if (salario < 1400.0) {
                    quantidadeAbaixo++;
                } else {
                    quantidadeAcima++;
                }
            } else {
                printf("Salário inválido. Por favor, digite um valor maior que R$ 1,00.\n");
            }
        } else {
            printf("Sexo inválido. Por favor, digite M para masculino ou F para feminino.\n");
        }
    }

    printf("Quantidade de assalariados abaixo do salário mínimo: %d\n", quantidadeAbaixo);
    printf("Quantidade de assalariados acima do salário mínimo: %d\n", quantidadeAcima);

    return 0;
}
