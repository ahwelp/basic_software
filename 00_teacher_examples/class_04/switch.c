#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  printf("Entre com um valor entre 1 e 5: ");
  if (scanf("%d", &i) != 1) {
    printf("scanf falhou!\n");
    exit(1);
  }
    
  switch (i) {
  case 1:
    printf("valor 1\n");
  break;
  case 2:
  case 3:
  case 4:
    printf("valores 2 a 4\n");
    break;
  case 5:
    printf("valor 5\n");
    break;
  default:
    printf("valor fora da faixa\n");
  }

  return 0;
}
