#include<stdio.h>

main(){
    float altura;

     printf("Digite a sua altura:");
     scanf("%f", &altura);

     if(altura > 1.8){
        printf("Voce e maio que 1.8");

     }else{
        printf("voce e menor que 1.8");
     }
}