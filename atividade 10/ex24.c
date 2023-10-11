#include <stdio.h>

int main() {
    int vetor[20];
    int i = 0, num = 1;

	    while (i < 20) {
	    	//encontrar multiplo de 7 ou que não termina em 7
	        if (num % 7 != 0 && num % 10 != 7) { 
	            vetor[i] = num;
	            i++;
	        }
	        num++;
	    }
	
	
	    printf("Números que não são múltiplos de 7 ou que não terminam em 7:\n");
	    for (i = 0; i < 20; i++) {
	        printf("%d ", vetor[i]);
	    }
	
	    return 0;
}
