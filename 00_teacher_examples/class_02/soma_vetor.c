#include <stdio.h>

int soma(int v_i[], int n)
{
   int c, s = 0;
   for (c = 0; c < n; c++) {
       s = s + v_i[c];
   }
   return s;
}

int main(void)
{
    int x[] = {31, 65, 82, 47, 90, 13};
    int t_x = sizeof(x) / sizeof(int);
    printf("t_x = %d\n", t_x);
    printf("soma = %d\n", soma(x, t_x));

    return 0;
}
