#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*array_new(): Aloca dinamicamente um vetor com o tamanho inteiro 
especificado, que é então inicializado com 0.0 em cada elemento. O ponteiro 
para esse vetor deve ser devolvido como valor de retorno.*/
double * array_new(int n) {
	double *vet = malloc(n * sizeof(double));
	int i = 0;
	while( i < n ){
		vet[i] = 0.0;
		i++;
	}    
	return vet;
}

/*array_print(): Recebe um ponteiro para double e seu respectivo número de 
elementos, devendo imprimir na tela esse vetor, com todos os elementos 
em uma única linha, separados por espaço.*/
void array_print(double *vet, int n) {
	int i = 0;
	while( i < n){	
		printf("%lf ", vet[i]);
		i++;
	}    
}

/*array_invert(): Recebe um ponteiro para double e seu respectivo número de elementos, e troca 
as posições dos mesmos. Ou seja, o primeiro elemento deverá ser trocado com o último, o segundo
 com o penúltimo, e assim por diante.*/
double * array_invert(double *vet, int n) {
    double *temp = array_new(n);
	for(int i = n-1; i >= 0; i--){
        temp[n-1-i] = vet[i];        
    }
   return temp;
}

/*array_copy(): Recebe dois ponteiro para double e o número de elementos que devem ser copiados 
do primeiro para o segundo. Não haverá alocação dinâmica, apenas cópia de elementos do primeiro 
vetor para o segundo. Essa função não tem valor de retorno.*/
void array_copy(double *vet, double *vet2, int n) {
	int i = 0;

    for(int i = 0; i < n; i++){
        vet2[i] = vet[i];
    }

}

/*array_grow(): Recebe um ponteiro para double e seu respectivo número de elementos, além de um inteiro indicando o 
número de posições adicionais. Um novo vetor deve ser criado dinamicamente com o tamanho total, na qual as posições 
iniciais serão preenchidas copiando do vetor passado, e as remanescentes deverão ser inicializadas com 0.0. Esta função deve 
retornar o ponteiro para o novo vetor criado.*/
double * array_grow(double *vet, int n, int add) {
	double *vet2 = NULL;
	vet2 = array_new(n + add);
    
    for(int i = 0; i < n; i++){
        vet2[i] = vet[i];
    }

    return vet2;
}

/*array_sort(): Recebe um ponteiro para double e seu respectivo número de 
elementos, ordenando em ordem crescente os seus elementos. Pode ser usado
 qualquer algoritmo de ordenação.*/
void array_sort(double *vet, int n) {
    int c, d, swap;
    c = d = swap = 0;

  for (c = 0 ; c < n - 1; c++){
    for (d = 0 ; d < n - c - 1; d++){
      if (vet[d] > vet[d+1]) {
        swap       = vet[d];
        vet[d]   = vet[d+1];
        vet[d+1] = swap;
      }
    }
  }
	
}

/*array_statistics(): Recebe um ponteiro para double e seu respectivo número de
 elementos, além de ponteiros para três doubles. Nesses ponteiros para double 
devem ser armazenados o menor valor presente, a 
mediana e o maior valor. Dica: Utilize a função array_sort().*/
void array_statistics(double *vet, int n, double *menor, double *maior, double *medio) {
	array_sort(vet, n);

    if(n % 2 == 0){
        *medio = (vet[n/2] + vet[(n/2)+1]) / 2;        
    }else{
        *medio = vet[(int)ceil(n/2)];
    }
    *maior = vet[0];
    *menor = vet[0];
    for(int i = 0; i < n; i++){        
        if(vet[i] > *maior){
            *maior = vet[i];
        }
        if(vet[i] < *menor){
            *menor = vet[i];
        }
    }
}


/*input_array(): Escreva uma função que recebe como parâmetro apenas um ponteiro para inteiro. Essa 
função primeiro lê da entrada padrão um número inteiro, que indica o tamanho da sequência de valores double 
que deve ser lida em seguida. Esta sequência deve sera armazenada em um vetor alocado dinamicamente. O tamanho 
desse vetor deve ser guardado no ponteiro para inteiro passado como parâmetro. 
O ponteiro para o vetor resultante deve então ser devolvido como valor de retorno.*/
double * input_array(int *n){
	int tam = 0;
	int i = 0;
	double *vet = NULL; 
	printf("Digite o tamanho para o vetor");
	scanf("%d", &tam);
	vet = array_new(tam);
	while( i < tam){
		printf("Digite um valor para preencher o vetor ");
		scanf("%lf\n", vet[i]);
		i++;
	}
	*n = tam;
    return vet;
}

