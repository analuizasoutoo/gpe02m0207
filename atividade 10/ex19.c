#include<stdio.h>

main(){
	int vetor[5] = {-1, 2, 4, -5, 8}, i, x = 2;
	
	for(i = 0; i < 5; i++){
		if(vetor[i] % x == 0){
			printf("\nMultiplos: %d", vetor[i]);
		}
	}
}