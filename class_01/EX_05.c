#include <stdio.h>
#include <math.h>

int main(){

    int numeros[] = {10, 5, 30, 60, 75, 100, 12, 16, -28};
    int segundo[] = {5, 40, 30, 12};    
        
    int hits = 0;

    for(int i = 0; i < sizeof(numeros)/sizeof(int); i++){        
        for(int j =0; j < sizeof(segundo)/sizeof(int); j++){
            hits = (numeros[i] == segundo[j]) ? (hits+1) : (hits); 
        }    
    }

    printf("Ocorrencias: %d\n", hits);    
}
