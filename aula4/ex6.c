#include<stdio.h>

main(){

    //variaveis
    double raio, area, PI=3.1415;

    printf("Digite o valor do raio");
    sacnf("%lf", &raio);

    //area do circulo
    //area+ PI * (raio * raio)
    area= PI *(pow(raio,2));

    printf("A area do circulo e: %lf:", area);
    

}