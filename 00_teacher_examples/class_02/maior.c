#include <stdio.h>

int maior(int a, int b);

int main(void)
{
    printf("%d\n", maior(26, 48));
    return 0;
}

int maior(int a, int b)
{
    return ((a > b) ? a : b);
}
