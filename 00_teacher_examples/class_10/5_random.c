#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//demonstra a criação de dez valores aleatórios no intervalo de 0 a 99

int main(void) {
    srand(time(NULL)); //inicializa a função rand com um valor “semente” de tal forma que esta semente seja um valor diferente a cada execução do programa, produzindo valores diferentes na sequência

    int i, r;
    for (i = 0; i < 10; i++) {
        r = rand() % 100; //produz um valor aleatório na faixa entre 0 e a constante RAND_MAX. O valor desta constante encontra-se definida no arquivo stdlib.h
        printf("%d ", r);
    }
    printf("\n");

    return 0;
}
