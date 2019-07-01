#include <stdio.h>

//exemplo de strings implementadas como vetores de caracteres e como ponteiros caracteres, porém, somente junto à sua declaração os vetores mantém informação sobre seu tamanho

int main(void) {
  char s1[] = "blablablabla";
  char *s2 = "blablablabla";

  printf ("s1=%s sizeof=%ld\n", s1, sizeof(s1)); //tamanho real do vetor
  printf ("s2=%s sizeof=%ld\n", s2, sizeof(s2)); //tamanho de um ponteiro

  return 0;
}
