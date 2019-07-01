/* Crie um programa que declare um vetor de strings com o seguinte conteúdo {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz"}. Depois faça um laço que percorre o vetor e imprime cada string na tela. */

#include <stdio.h>

int main() {
    char *v_s[] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz"};
    int i, n;
    
    n = sizeof(v_s) / sizeof(char*);
    for (i = 0; i < n; i++) {
        printf("v_s[%d]=\"%s\"\n", i, v_s[i]);
    }
    
    return 0;
}
