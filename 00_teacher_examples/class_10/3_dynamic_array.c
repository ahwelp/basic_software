#include <stdio.h>
#include <stdlib.h>

//demonstra como alocar dinamicamente e retornar vetores

double *dynamic_array(int n) {
    double *p_d = NULL;
    p_d = malloc(n * sizeof(double));

    int i;
    for (i = 0; i < n; i++)
    {
        p_d[i] = (i + 1) * (i + 1);
    }

    return p_d;
}

int main(void) {
    double *p_x = NULL;
    p_x = dynamic_array(5);
    
    int c;
    for (c = 0; c < 5; c++) {
        printf("p_x[%d]=%g\n", c, p_x[c]);
    }

    free(p_x);
    p_x = NULL;
    
    return 0;
}
