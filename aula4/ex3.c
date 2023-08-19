#include<stdio.h>

main(){

    //variaveis
    float largura, comprimento, area;

    //entrada de dados
    printf("Digite a largura");
    scanf("%f", &largura);
    
    printf("Digite o comprimento");
    scanf("%f", comprimento);

    //area
    area= largura * comprimento;

    printf("A area da sala e: %.2fm2", area);
    
    }