#include<stdio.h>

main(){

    int A, B, C, D, maior, menor;

    printf("Digite quatro numeros: ");
    scanf("%d, %d, %d, %d", &A, &B, &C, &D);

    if((A > B) || (A > C) || (A > D)){
        maior=A;

    }else if((A < B) || (A < C) || (A < D)){
        menor=A;

    }else if((B > A)|| (B > C) || (B > D)){
        maior=B;

    }else if ((B < A) || (B < C) || (B < D)){
        menor=B;

    }else if((C > A)|| (C > B) || (C > D)){
        maior=C;

    }else if ((C < A) || (C < B) || (C < D)){
        menor=B;

    }else if((D > A)|| (D > B) || (D > C)){
        maior=D;

    }else if((D < A) || (D< B) || (D < C)){
        menor=D;
    }
    
    printf("o maior valor e:%d", maior);
    printf(" o menor valor e: %d", menor);

}