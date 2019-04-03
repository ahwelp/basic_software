#include <stdio.h>

int main(void)
{
    double v[5] = { 1.2, 3.4, 5.6, 7.8, 9.0 };
    int i = 0;

    for (i = 0; i <= 4; i++) {
        printf("v[%d] = %f \n", i, v[i]);
    }

    return 0;
}

