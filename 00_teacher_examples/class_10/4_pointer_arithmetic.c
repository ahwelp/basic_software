#include <stdio.h>

//demonstração de aritmética com ponteiros

int main(void) {
    char s[] = "abcdefghijklmnopq";

    //primeira forma -- recomendada!!!
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    //segunda forma -- relativamente comum
    char *p_c = NULL;
    for (p_c = s; (*p_c) != '\0'; p_c++) {
        printf("%c", (*p_c));
    }
    printf("\n");

    //terceira forma -- fuja correndo!!!
    p_c = s;
    for (i = 0; (*(p_c + i)) != '\0'; i++) {
        printf("%c", (*(p_c + i)));
    }
    printf("\n");

    return 0;
}
