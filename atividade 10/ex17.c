#include<stdio.h>

main(){
	int vetor[5] = {1, 2, 4, 5, 9}, codigo, i;
	
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	
	if(codigo == 0){
		exit(0);	
	}else if(codigo == 1){
		for(i = 0; i < 5; i++){
			printf("\nVetor[%d] = %d",i,vetor[i]);
		}
	}else if(codigo == 2){
		for(i = 4; i >= 0; i--){
		printf("\nVetor[%d] = %d",i,vetor[i]);
		}
	}else{
		printf("\nInvalido");
	}
	
	
}