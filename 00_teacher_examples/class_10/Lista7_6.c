/* Crie uma função chamada duplicate(), que recebe como parâmetro uma string e um número inteiro n. Essa função deve retornar uma nova string, alocada dinamicamente, em que a string fornecida está duplicada n vezes. Não utilize as funções da biblioteca (strcpy() ou strcat()), apenas use manipulação de ponteiros para criar a string duplicada. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str, int n) {
    int len = strlen(str);
    char *pc = (char *) malloc(sizeof(char) * len * n + 1);
    int i, j, index = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < len; j++) {
            pc[index] = str[j];
            index++;
        }
    }
    pc[index] = '\0'; //está apontando para última posição
    return pc;
}

int main(void) {
    char *dup;
    dup = duplicate("Prog", 4);
    printf("%s\n", dup);
    free(dup);
    return 0;
}
