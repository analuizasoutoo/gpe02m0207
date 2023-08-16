#include<stdio.h>

main(){

    //decalaracao das variaveis

    char nome[50];
    int idade;
    char matricula[20];
    char endereco [50];
    char curso [50];
    char periodo[20];
    char disciplinas[100];

    printf("informacoes de cadastro");
    printf("\nDigite seu nome:");
    fgets(nome, 50, stdin);

    printf("\nDigite a sua idade:");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nDigite sua matricula:");
    fgets(matricula, 20, stdin);

    printf("\n Digite seu endereco:");
    fgets(endereco, 50, stdin);

    printf("\nDigite seu curso:");
    fgets(curso, 50, stdin);

    printf("\nDigite seu periodo:");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDigite suas disciplinas:");
    fgets(disciplinas, 100, stdin);


    printf("Os dados inseridos sao: Nome: %s, Idade: %d, Matricula: %s, endereco: %s, Curso:%s, Periodo:%d, Disciplinas: %s.", nome, idade, matricula, endereco,curso, periodo, disciplinas);






}