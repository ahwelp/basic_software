#include <stdio.h>
#include "array.h"
int main (void){
	int n = 0;
	int i = 0;
	double *vet = NULL;
	printf("Digite o tamanho do vetor");
	scanf("%d", &n);
	array_new(vet, n);
	while(i<n){
		printf("%d", vet[i]);
		i++;
	}	
return 0;
}
