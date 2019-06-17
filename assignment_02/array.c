#include <stdio.h>

double array_new(double *vet, int n) {
	vet = malloc(n * sizeof(double));
	int i = 0;
	while(i<n){
		vet[i] = 0.0;
		i++;
	}
	return *vet;
}


void array_print(double *vet, int n) {
	int i = 0;
	while(i<n){	
		printf("%d ", vet[i]);
		i++;
	}
}


double array_invert(double *vet, int n) {
	double aux = 0;
	int i = 0;
	int j = n;
	while(i<n){
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
		i++;
		j--;
	}
return vet;
}


void array_copy(double *vet, double *vet2, int n) {
	int i = 0;	
	while(i<n){
		vet2[i] = vet[i];
		i++;
	}
	i = 0;
	while(i<n){
		printf("%f\n", vet2[i]);
		i++;
	}
}


double array_grow(double *vet, int n, int add) {
	double *vet2 = NULL;
	int i = 0;
	int j = n + add;
	vet2 = malloc(j * sizeof(double));
	while(i<n){
		vet2[i] = vet[i];
		i++;
	}
	while(i<j){
		vet[i] = 0.0;
		i++;
	}
return *vet2;
}


void array_sort(double *vet, int n) {
	double aux[n];
	int i = 0;
	int j = 0;
	while(j<n){
		while(i<n){
			if(vet[j]<aux[i]){
				vet[j] = aux[i];
			}
			i++;
		}
		j++;
	}
	j=0;
	while(j<n){
		printf("%f\n ", vet[j]);
		j++;
	}	
}


void array_statistics(double *vet, int n, double *menor, double *maior, double *medio) {
	double aux[n];
	int i = 0;
	int j = 0;
	int m = n/2;
	while(j<n){
		while(i<n){
			if(vet[j]<aux[i]){
				vet[j] = aux[i];
			}
			i++;
		}
		j++;
	}
	*maior = vet[n];
	*menor = vet[0];
	*medio = vet[m];
}



void input_array(int *n)
	int tam = 0;
	int i = 0;
	double *vet = NULL; 
	printf("Digite o tamanho para o vetor");
	scanf("%d", &tam);
	vet = malloc(tam * sizeof(double));
	while(i<tam){
		printf("Digite um valor para preencher o vetor ");
		scanf("%d\n", vet[i]);
		i++;
	}
	*n = tam;
}

	
