/* Crie uma função chamada product() que calcula o produto de valores do tipo double. Essa função recebe como parâmetro um ponteiro para double(ou seja, double *p_d) e um número inteiro n. Esta função deve retornar o resultado da multiplicação de todos os n números apontados por p_d. Teste criando o seguinte vetor de doubles {1.2, 3.4, 5.6, 7.8, 9.0} e calcule o produto dos quatro primeiros números e também o produto dos últimos três. */

#include <stdio.h>
#include <stdlib.h>

double product(double *p_d, int n) {
    double r = 1.0;
    int i;
    for (i = 0; i < n; i++) {
        r = r * p_d[i];
    }
    return r;
}

int main(void) {
    double v_d[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    double p;
    p = product(v_d, 4);
    printf("produto dos quatro primeiros=%g\n", p);
    p = product(&v_d[2], 3);
    printf("produto dos três últimos    =%g\n", p);
    
    return 0;
}
