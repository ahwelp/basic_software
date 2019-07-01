#include <stdio.h>
#include <stdlib.h>

//demonstra como obter ponteiros para elementos dentro de um vetor

int main(void) {
    int i; //alocação estática, ocorre antes do programa ser executado
    int *p_i = NULL; //alocação dinâmica (malloc, realloc e free, que estão na biblioteca stdlib), ocorre durante a execução do programa. Aloca 10 blocos consecutivos na memória RAM da quantidade de bytes ocupados por inteiros e devolve o endereço desse bloco
    int *x = NULL;
    
    p_i = malloc(10 * sizeof(int));

    for (i = 0; i < 10; i++) {
        p_i[i] = i;
    }
    
    x = p_i; //x aponta para p_i[0]
    printf("(*x)=%d\n", (*x));
 
    x = &p_i[2]; //x aponta para p_i[2]
    printf("(*x)=%d\n", (*x));
 
    free(p_i); //as variáveis alocadas dinamicamente continuam a existir mesmo depois que a execução da função termina, sendo preciso recorrer à função free.
    p_i = NULL;

    return 0;
}
