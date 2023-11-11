#include <stdio.h>

int validaQuantidade(int quantidade) {
    if (quantidade >= 0) {
        return 1; // Quantidade válida
    } else {
        return 0; // Quantidade inválida
    }
}

float calculaSalario(int quantidade) {
    float salarioBase = 600.0;
    float adicional = 0.0;

    if (quantidade > 50) {
        if (quantidade <= 80) {
            adicional = 0.50 * (quantidade - 50);
        } else {
            adicional = 0.50 * 30 + 0.75 * (quantidade - 80);
        }
    }

    return salarioBase + adicional;
}

void mostraFinal(float salario) {
    printf("Salário total: R$ %.2f\n", salario);
}

int main() {
    int quantidade;
    int funcionarios = 0;

    while (1) {
        printf("Digite a quantidade de peças fabricadas pelo funcionário (ou um valor negativo para sair): ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            break;
        }

        if (validaQuantidade(quantidade)) {
            float salario = calculaSalario(quantidade);
            mostraFinal(salario);
            funcionarios++;
        } else {
            printf("Quantidade inválida. Por favor, digite um valor não negativo.\n");
        }
    }

    printf("Total de funcionários processados: %d\n", funcionarios);

    return 0;
}
