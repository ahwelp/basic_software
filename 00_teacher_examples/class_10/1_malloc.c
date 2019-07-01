#include <stdio.h>
#include <stdlib.h>

//demonstra uma alocação dinâmica simples de vetor

int main(void) {
    int *p_i = NULL;
    p_i = malloc(10 * sizeof(int)); //alocação dinâmica (malloc, realloc e free, que estão na biblioteca stdlib), ocorre durante a execução do programa. Aloca 10 blocos consecutivos na memória RAM da quantidade de bytes ocupados por inteiros e devolve o endereço desse bloco

    p_i[7] = 123;
    printf("p_i[7]=%d\n", p_i[7]);
 
    free(p_i);
    p_i = NULL;

    return 0;
}
