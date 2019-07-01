/* Construa uma função chamada random_vector(), que recebe um parâmetro inteiro n e retorna um ponteiro para inteiro. Esta função deve criar dinamicamente um vetor de inteiros com o tamanho especificado. O vetor deve então ser inicializado com valores aleatórios entre 0 e 99. Teste esta função, imprimindo um vetor criado com 25 valores. Dica: use a função rand() presente no include stdlib e também o operador de resto de divisão %. */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int *random_vector(int n);

int main() {
    int *x = NULL;
    x = random_vector(25);
    
    int i;    
    for (i = 0; i < 25; i++) {
        printf("x[%d]=%d\n", i, x[i]);
    }

    //libera memória apontada por 'x' e zera este ponteiro, por garantia
    free(x);
    x = NULL;
    
    return 0;
}

int *random_vector(int n) {
    //inicializa o gerador de números aleatórios com base na hora atual
    srand(time(NULL));

    int *p_i = NULL;
    p_i = (int *) malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; i++) {
        p_i[i] = rand() % 100; //rand() devolve um inteiro de 32 bits
    }
    return p_i;
}
