#include <stdio.h>

//exemplo de modificação de variável referenciada através de seu ponteiro

void change (int *p_i) {
  *p_i = 2;
}

int main (void) {
  int a = 1;
    
  printf ("a (antes da chamada) = %d\n", a);
  change (&a); //a variável 'a' é efetivamente alterada dentro da função
  printf ("a (depois da chamada) = %d\n", a);
  
  return 0;
}
