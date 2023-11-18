#include<stdio.h>
#include<stdlib.h>  // Adicionado para a função rand
#include<string.h>  // Adicionado para a função strcpy

#define TAM 1000
#define MAX_NOME 50
#define MAX_EMAIL 50
#define MAX_ENDERECO 100

// Modelo do registro
typedef struct {
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
    char sexo[15];
    char endereco[MAX_ENDERECO];
    double altura;
    int vacina;
    int id;
    int status;
} Usuario;

// Protótipos das funções
void cadastrar(Usuario u[], int *totalCadastro);
void imprimir(Usuario u[], int totalCadastro);
void buscarUsuarioPorEmail(Usuario u[], int totalCadastro, const char *email);
void alterarUsuario(Usuario u[], int totalCadastro, int buscarId);
int excluirUsuario(Usuario u[], int *totalCadastro, int buscarId);

int main() {
    Usuario usuarios[TAM];
    int opcao, totalCadastro = 0;
    int buscarId;
    char buscarEmail[MAX_EMAIL];

    do {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para imprimir os cadastros");
        printf("\nDigite 3 para buscar um usuário pelo e-mail");
        printf("\nDigite 4 para alterar um usuário");
        printf("\nDigite 5 para excluir um usuário");
        printf("\nDigite 0 para encerrar o programa");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Cadastra
                if (totalCadastro < TAM) {
                    cadastrar(usuarios, &totalCadastro);
                } else {
                    printf("\n\nLimite máximo de cadastro atingido");
                }
                break;
            case 2:
                // Mostra todos os cadastros
                imprimir(usuarios, totalCadastro);
                break;
            case 3:
                // Buscar por e-mail
                printf("Digite o e-mail para buscar: ");
                scanf("%s", buscarEmail);
                buscarUsuarioPorEmail(usuarios, totalCadastro, buscarEmail);
                break;
            case 4:
                // Alterar
                printf("Digite o id para alterar: ");
                scanf("%d", &buscarId);
                alterarUsuario(usuarios, totalCadastro, buscarId);
                break;
            case 5:
                // Excluir
                printf("Digite o id para excluir: ");
                scanf("%d", &buscarId);
                if (totalCadastro == 0) {
                    printf("Lista vazia");
                } else {
                    int res = excluirUsuario(usuarios, &totalCadastro, buscarId);
                    if (res == 1) {
                        printf("Excluído com sucesso\n");
                    } else {
                        printf("Não foi possível excluir - usuário não encontrado\n");
                    }
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}

void cadastrar(Usuario u[], int *totalCadastro) {
    u[*totalCadastro].status = 1;
    u[*totalCadastro].id = rand() % 1000;
    fflush(stdin);
    printf("\nDigite o nome do usuário: ");
    fflush(stdin);
    fgets(u[*totalCadastro].nome, sizeof(u[*totalCadastro].nome), stdin);
    fflush(stdin);
    printf("Digite o e-mail do usuário: ");
    fflush(stdin);
    fgets(u[*totalCadastro].email, sizeof(u[*totalCadastro].email), stdin);
    fflush(stdin);
    // Adicionada validação do campo sexo
    do {
        printf("Digite o sexo do usuário (Feminino, Masculino ou Indiferente): ");
        fflush(stdin);
        fgets(u[*totalCadastro].sexo, sizeof(u[*totalCadastro].sexo), stdin);
    } while (strcmp(u[*totalCadastro].sexo, "Feminino\n") != 0 &&
             strcmp(u[*totalCadastro].sexo, "Masculino\n") != 0 &&
             strcmp(u[*totalCadastro].sexo, "Indiferente\n") != 0);

    printf("Digite o endereço do usuário: ");
    fflush(stdin);
    fgets(u[*totalCadastro].endereco, sizeof(u[*totalCadastro].endereco), stdin);

    // Adicionada validação do campo altura
    do {
        printf("Digite a altura do usuário (entre 1 e 2 metros): ");
        scanf("%lf", &u[*totalCadastro].altura);
    } while (u[*totalCadastro].altura < 1.0 || u[*totalCadastro].altura > 2.0);

    // Adicionada validação do campo vacina
    do {
        printf("Digite 1 se o usuário foi vacinado, 0 caso contrário: ");
        scanf("%d", &u[*totalCadastro].vacina);
    } while (u[*totalCadastro].vacina != 0 && u[*totalCadastro].vacina != 1);

    (*totalCadastro)++;
}

void imprimir(Usuario u[], int totalCadastro) {
    if (totalCadastro == 0) {
        printf("\n\nNão existem usuários cadastrados\n");
    } else {
        for (int i = 0; i < totalCadastro; i++) {
            printf("\nId: %d", u[i].id);
            printf("\nNome: %s", u[i].nome);
            printf("E-mail: %s", u[i].email);
            printf("Sexo: %s", u[i].sexo);
            printf("Endereço: %s", u[i].endereco);
            printf("Altura: %.2lf", u[i].altura);
            printf("Vacina: %s", u[i].vacina == 1 ? "Sim" : "Não");
            u[i].status == 1 ? printf("\nStatus : Ativo") : printf("\nStatus : Inativo");
            printf("\n\n");
        }
    }
}

void buscarUsuarioPorEmail(Usuario u[], int totalCadastro, const char *email) {
    if (totalCadastro == 0) {
        printf("\nNão existem cadastros na lista\n");
        return;
    } else {
        for (int i = 0; i < totalCadastro; i++) {
            if (strcmp(u[i].email, email) == 0) {
                printf("\nNome do usuário encontrado: %s", u[i].nome);
                return;
            }
        }
    }
    printf("\nUsuário não encontrado na lista");
}

void alterarUsuario(Usuario u[], int totalCadastro, int buscarId) {
    int opcaoEscolhida;
    if (totalCadastro == 0) {
        printf("Lista vazia");
        return;
    } else {
        for (int i = 0; i < totalCadastro; i++) {
            if (u[i].id == buscarId) {
                printf("\nNome: %s ", u[i].nome);
                printf("\nE-mail: %s ", u[i].email);
                printf("\nSexo: %s ", u[i].sexo);
                printf("\nEndereço: %s ", u[i].endereco);
                printf("\nAltura: %.2lf ", u[i].altura);
                printf("\nVacina: %s", u[i].vacina == 1 ? "Sim" : "Não");
                u[i].status == 1 ? printf("\nStatus : Ativo") : printf("\nStatus : Inativo");

                printf("\nAlterar os dados: ");
                printf("\nDigite 1 para alterar o nome");
                printf("\nDigite 2 para alterar o e-mail");
                printf("\nDigite 3 para alterar o sexo");
                printf("\nDigite 4 para alterar o endereço");
                printf("\nDigite 5 para alterar a altura");
                printf("\nDigite 6 para alterar a vacina");
                printf("\nDigite 7 para alterar o status");
                printf("\nDigite 8 para alterar todos os campos");
                scanf("%d", &opcaoEscolhida);

                switch (opcaoEscolhida) {
                    case 1:
                        printf("Alteração do nome: ");
                        fflush(stdin);
                        fgets(u[i].nome, sizeof(u[i].nome), stdin);
                        fflush(stdin);
                        break;
                    case 2:
                        printf("Alteração do e-mail: ");
                        fflush(stdin);
                        fgets(u[i].email, sizeof(u[i].email), stdin);
                        fflush(stdin);
                        break;
                    case 3:
                        printf("Alteração do sexo: ");
                        fflush(stdin);
                        fgets(u[i].sexo, sizeof(u[i].sexo), stdin);
                        fflush(stdin);
                        break;
                    case 4:
                        printf("Alteração do endereço: ");
                        fflush(stdin);
                        fgets(u[i].endereco, sizeof(u[i].endereco), stdin);
                        fflush(stdin);
                        break;
                    case 5:
                        printf("Alteração da altura: ");
                        scanf("%lf", &u[i].altura);
                        break;
                    case 6:
                        printf("Alteração da vacina (1 - Sim / 0 - Não): ");
                        scanf("%d", &u[i].vacina);
                        break;
                    case 7:
                        printf("Alteração do status (1 - Ativo / 0 - Inativo): ");
                        scanf("%d", &u[i].status);
                        break;
                    case 8:
                        printf("Alteração do nome: ");
                        fflush(stdin);
                        fgets(u[i].nome, sizeof(u[i].nome), stdin);
                        fflush(stdin);
                        printf("Alteração do e-mail: ");
                        fflush(stdin);
                        fgets(u[i].email, sizeof(u[i].email), stdin);
                        fflush(stdin);
                        printf("Alteração do sexo: ");
                        fflush(stdin);
                        fgets(u[i].sexo, sizeof(u[i].sexo), stdin);
                        fflush(stdin);
                        printf("Alteração do endereço: ");
                        fflush(stdin);
                        fgets(u[i].endereco, sizeof(u[i].endereco), stdin);
                        fflush(stdin);
                        printf("Alteração da altura: ");
                        scanf("%lf", &u[i].altura);
                        printf("Alteração da vacina (1 - Sim / 0 - Não): ");
                        scanf("%d", &u[i].vacina);
                        printf("Alteração do status (1 - Ativo / 0 - Inativo): ");
                        scanf("%d", &u[i].status);
                        break;
                }
            }
        }
    }
}

int excluirUsuario(Usuario u[], int *totalCadastro, int buscarId) {
    int achou = 0;
    for (int i = 0; i < *totalCadastro; i++) {
        if (u[i].id == buscarId) {
            // Registro encontrado, realiza a exclusão
            for (int j = i; j < *totalCadastro - 1; j++) {
                u[j] = u[j + 1];
            }
            achou = 1;
            (*totalCadastro)--;
            printf("\nExcluído com sucesso");
            break;
        }
    }
    return achou;
}
