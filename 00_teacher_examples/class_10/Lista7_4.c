/* Crie uma função string_length() que recebe uma string como parâmetro e devolve um inteiro. Você deve implementar essa função sem utilizar chamadas da biblioteca. Além disso, use incremento do ponteiro através do operador '++'. */

#include <stdio.h>

int string_length(char *p_c) {
    int n = 0;
    while ((*p_c) != '\0') {
        p_c++;
        n++;
    }
    return n;
}

int main() {
    char s1[] = "Programacao Software Basico";
    char *s2  = "vwxyz"; //forma equivalente

    printf("%s (%d)\n", s1, string_length(s1));
    printf("%s (%d)\n", s2, string_length(s2));
    
    return 0;
}
