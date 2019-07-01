/* A Google está desenvolvendo um novo sistema operacional para máquinas de venda de bolinhas de borracha de R$1,00, mas precisa realizar testes no Gerenciador de Memória desse novo sistema. Você foi contratado para fazer um programa para verificar se o gerenciador de memória está funcionando corretamente. Seu programa deverá ler 3 números inteiros, 3 números decimais, 3 letras, armazená-las em variáveis, e depois, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 2019, os decimais por 9.99, e as letras por ’Y’. Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizados. */

#include <stdio.h>
#include <stdlib.h>

void main () {
  int num1, num2, num3;
  int *p_num;
  float dec1, dec2, dec3;
  float *p_dec;
  char letra1, letra2, letra3;
  char *p_letra;
  // lendo os dados necessarios
  printf("Digite um numero inteiro: ");
  scanf("%d", &num1);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &num2);
  printf("Digite outro numero inteiro: ");
  scanf("%d", &num3);
  printf("Digite um numero decimal: ");
  scanf("%f", &dec1);
  printf("Digite outro numero decimal: ");
  scanf("%f", &dec2);
  printf("Digite outro numero decimal: ");
  scanf("%f", &dec3);
  printf("Digite uma letra: ");
  scanf(" %c", &letra1);
  printf("Digite outra letra: ");
  scanf(" %c", &letra2);
  printf("Digite outra letra: ");
  scanf(" %c", &letra3);
  //imprimindo dados que foram lidos
  printf("Os numeros informados foram: \n");
  printf("Inteiros: %d, %d e %d \n", num1, num2, num3);
  printf("Decimais: %.2f, %.2f e %.2f \n", dec1, dec2, dec3);
  printf("Letras: %c, %c e %c \n", letra1, letra2, letra3);
  printf("\n");
  //troca os valores das variaveis atraves de ponteiros
  p_num = &num1;
  *p_num = 2019;
  p_num = &num2;
  *p_num = 2019;
  p_num = &num3;
  *p_num = 2019;
  p_dec = &dec1;
  *p_dec = 9.99;
  p_dec = &dec2;
  *p_dec = 9.99;
  p_dec = &dec3;
  *p_dec = 9.99;
  p_letra = &letra1;
  *p_letra = 'Y';
  p_letra = &letra2;
  *p_letra = 'Y';
  p_letra = &letra3;
  *p_letra = 'Y';
  //imprime as variaveis com os novos valores
  printf("Valores modificados: \n");
  printf("Primeiro numero inteiro: %d \n", num1);
  printf("Segundo numero inteiro: %d \n", num2);
  printf("Terceiro numero inteiro: %d \n", num3);
  printf("Primeiro numero decimal: %.2f \n", dec1);
  printf("Segundo numero decimal: %.2f \n", dec2);
  printf("Terceiro numero decimal: %.2f \n", dec3);
  printf("Primeira letra: %c \n", letra1);
  printf("Segunda letra: %c \n", letra2);
  printf("Terceira letra: %c \n", letra3);
}
