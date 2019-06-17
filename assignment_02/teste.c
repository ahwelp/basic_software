#include <stdio.h>
#include "array.h"
int main (void){
	
    double *vet = NULL;
    double *vet2 = NULL;
    double *stats = NULL;

    int vet_size, temp, last;
    vet_size = 10;
    temp = 1;
    last = 0;
    
    //Testing array_new    
    vet = array_new(vet_size);
    
    for(int i = 0; i < vet_size; i++){
        vet[i] = temp;
        temp = temp + last;
        last = temp;
    }

    //Testing array_print
    array_print(vet, vet_size);
	printf("\n");
	printf("\n");

    //Testing array_invert
    vet = array_invert(vet, vet_size);
    array_print(vet, vet_size);
	printf("\n");
	printf("\n");
    
    //Testing array_copy
    vet2 = array_new(vet_size);
    array_copy(vet, vet2, vet_size);
    printf("First vet:\n");
    array_print(vet, vet_size);
    printf("\n");
    printf("Second vet:\n");
    array_print(vet2, vet_size);
	printf("\n");
	printf("\n");

    //Testing array_grow
    vet = array_grow(vet, vet_size, 5);
    array_print(vet, vet_size + 5);
	printf("\n");
	printf("\n");

    //Testing array_sort
    array_sort(vet2, vet_size);
    array_print(vet2, vet_size);
	printf("\n");
	printf("\n");
    
    //Testing array_statistics
    vet2[3] = -200;
    array_statistics(vet2, vet_size, stats);
    printf("Maior: %lf, Menor: %lf, Medio: %lf", stats[1], stats[0], stats[3]);
    printf("\n");
	printf("\n");


    //Testing input_array
    int size = 0;
    double *array_input = NULL;
    array_input = input_array(*size);
    printf("\n");
	printf("\n");

}
