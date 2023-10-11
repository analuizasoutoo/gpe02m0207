#include<stdio.h>

main(){
	int vetor[5] = {-1, 2, 4, -5, 9}, i, j;
	
	for(i = 0; i < 5; i++){
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
	}
	
	for(j = 0; j < 5; j++){
		printf("\nvetor[%d] = %d", j, vetor[j]);
	}
	
}