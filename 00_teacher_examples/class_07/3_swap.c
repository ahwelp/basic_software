#include <stdio.h>

//exemplo de troca de variáveis referenciadas através de seus ponteiros

void swap (int *p_x, int *p_y) {
  int temp = *p_x;
  *p_x = *p_y;
  *p_y = temp;
}

int main (void) {
  int a = 1;
  int b = 2;
  printf ("antes:  a=%d b=%d\n", a, b);
  swap (&a, &b);
  printf ("depois: a=%d b=%d\n", a, b);

  return 0;
}
