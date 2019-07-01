#include <stdio.h>

//exemplo de declaração, inicialização e uso de ponteiro

int main (void) {
  int a = 8;
  int b = 2;
  int *p_i = NULL; //declaração de ponteiro
    
  p_i = &a; //inicialização de ponteiro
  *p_i = 1000; //acesso através de ponteiro, atribuindo um novo valor para "a"
  p_i = &b; //ponteiro passa a apontar para outra variável
  *p_i = 1234; //acesso através de ponteiro, atribuindo um novo valor para "b"
  printf ("a = %d\n", a);
  printf ("b = %d\n", b);
  printf ("sizeof (p_i) = %ld\n", sizeof(p_i)); //tamanho em bytes
  printf ("p_i = %p\n", p_i); //endereço de memória atual    

  return 0;
}
