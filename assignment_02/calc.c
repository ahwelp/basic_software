#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main(){
    
    double *vet = NULL;

    double value;
    value = 0;
    
    double *stats = NULL;
    stats = malloc(3 * sizeof(double));
   
    int sets, innerSet;
    sets = innerSet = 0;
    
    sets = 0;    
    scanf("%d", &sets);

    for(int i = 0; i < sets; i++){
        scanf("%d", &innerSet);
        vet = array_new(innerSet);
        for(int j = 0; j < innerSet; j++){
            scanf("%lf", &value);
            vet[j] = value;            
        }        
        array_statistics(vet, innerSet, stats);
        free(vet);
        printf("Maior: %lf, Menor: %lf, Medio:%lf\n", stats[1], stats[0], stats[2]);        
    }
    free(stats);
}
