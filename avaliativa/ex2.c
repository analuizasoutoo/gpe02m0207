#include<stdio.h>

main(){

    float alturaChico = 1.50; 
    float alturaZe = 1.10; 
    int anos = 0;

     while (alturaZe <= alturaChico) {
        alturaChico += 0.02;
        alturaZe += 0.03; 
        anos++;

     }
      printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);

      return 0;
}