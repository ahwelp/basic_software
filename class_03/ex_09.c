#include <stdio.h>
/*
9. Crie uma função remove_minimum() que recebe como parâmetros um vetor 
de inteiros e seu respectivo tamanho. Essa função deve encontrar o menor 
valor diferente de zero presente neste vetor, apagar este escrevendo zero em 
cima e então retornar este mínimo. Para testar, crie um vetor de inteiros 
com os seguintes valores {21, 87, 92, 13, 56, 43, 76, 17, 95, 38}, e chame 
remove_minimum() exatamente 10 vezes, imprimindo na tela os valores retornados.
*/

int* remove_minimo(int vetor[], int index);

void main(){
    int vetor[] = {21, 87, 92, 13, 56, 43, 76, 17, 95, 38};
    for(int i = 1; i <= 10; i++){
        remove_minimo(vetor, sizeof(vetor) / sizeof(int));
    }
    return 0;
}

int* remove_minimo( int vetor[], int index ){
    int menor = vetor[0];
    int menor_index = 0;
    int i = 0;
    for(i = 0; i <= index; i++){
        if(vetor == 0){ continue; }
        if(vetor[i] < menor){ menor_index = i;}
    }
    vetor[i] = 0;
    return vetor;
}
