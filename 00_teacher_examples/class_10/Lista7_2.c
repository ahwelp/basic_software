/* Com base no programa anterior, crie agora um vetor de strings de 9 posições, e atribua manualmente a cada elemento as strings "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vw", "xyz". O laço que percorre o vetor e imprime as strings precisa ser modificado para funcionar? */

#include <stdio.h>

int main() {
    char *v_s[9];
    v_s[0] = "abc";
    v_s[1] = "def";
    v_s[2] = "ghi";
    v_s[3] = "jkl";
    v_s[4] = "mno";
    v_s[5] = "pqr";
    v_s[6] = "stu";
    v_s[7] = "vw";
    v_s[8] = "xyz";

    int i, n;
    
    n = sizeof(v_s) / sizeof(char*);
    for (i = 0; i < n; i++) {
        printf("v_s[%d]=\"%s\"\n", i, v_s[i]);
    }
    
    return 0;
}
