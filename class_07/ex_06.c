/*
06. Escreva uma função chamada limits(), que recebe quatro parâmetros: um vetor de 
inteiros, o tamanho deste vetor, um ponteiro p_min para inteiro e um 
ponteiro p_max para inteiro. Essa função retorna void, e deve encontrar o 
menor e o maior elemento do vetor passado, e armazená-los em p_min e p_max, 
respectivamente. Teste esta função chamando ela a partir de main().*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limits(int values[], int size, int *_min, int *_max){
    *_min = *_max = values[0];

    for(int i = 0; i < size; i++){
        if(values[i] > *_max){
            *_max = values[i];
        }
        if(values[i] < *_min){
            *_min = values[i];
        }
    }

}

int main(){
    int min, max;
    int vet[] = {10, -5, 15, 18, -12};    
    min = max = 0;

    limits(vet, sizeof(vet)/sizeof(int), &min, &max);
    
    printf("The smaller is %d and the bigger is %d\n", min, max);

}
