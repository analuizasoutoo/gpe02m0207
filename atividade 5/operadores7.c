#include<stdio.h>

main(){
    float nota1 = 7, nota2 = 8, nota3 = 5, mediaPonderada;

    mediaPonderada= nota1 + nota2 + (nota3 * 2)/4;

    printf("Media do aluno: %f", mediaPonderada);

    if(mediaPonderada >= 7){
        printf("aprovado");

    }else{
        printf("Reprovado");
    }
}