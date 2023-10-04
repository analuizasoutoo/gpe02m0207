#include<stdio.h>

main(){

    int A[6]= {1, 0, 5, -2, -5, 7}, soma;

    soma = A[0] + A[1] + A[5];

    /*printf("%d", soma);

    A[4] = 100;

    printf("%d", A[0]);
    printf("%d", A[1]);
    printf("%d", A[2]);
    printf("%d", A[3]);
    printf("%d", A[4]);
    printf("%d", A[5]);*/

    for(int i=0; i < 6; i++){
        //somando somente alguns indices
        if(i== 0 || i == 1 || i == 5){
            soma += A[i];
        }
        if(i == 4){
            A[i] == 100;
        }
        printf("%d", A[i]);
    }
    printf("%d", soma);


}