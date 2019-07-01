#include <stdio.h>

//exemplo da equivalência entre vetores e ponteiros quando passados como parâmetros de funções

void func1 (int vi[], int n) {
  printf ("sizeof vi=%d vi[3]=%d\n", n, vi[3]);
}

void func2 (int *p_i, int n) {
  printf ("sizeof p_i=%d p_i[3]=%d\n", n, p_i[3]);
}

int main (void) {
  int x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int t = sizeof (x) / sizeof (int);
  func1 (x, t);
  func2 (x, t);

  return 0;
}
