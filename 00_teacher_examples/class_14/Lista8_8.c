/* O laboratório de agropecuária da UNIVATES tem um termômetro de extrema precisão, utilizado para aferir as temperaturas de uma estufa onde cultivam uma variedade de jaca transgênica, com apenas um caroço do tamanho de uma semente de laranja. O problema é que este termômetro dá os resultados na escala Kelvin (K) e os pesquisadores que atuam perto da estufa são americanos, acostumados com a escala Fahrenheit (F). Você deve criar um programa para pegar uma lista de 24 temperaturas em Kelvin e convertê-las para Fahrenheit. O problema maior é que esses pesquisadores querem que você faça essa conversão e imprima os resultados utilizando ponteiros. Para a conversão, observe as fórmulas a seguir: F = 1.8 * (K − 273) + 32
Em que: F = Fahrenheit e K = Kelvin. */

#include <stdio.h>
#include <stdlib.h>

void main () {
  int i;
  float temperatura[24];
  float *p_temp;
  //lendo as temperaturas
  printf("Insira 24 temperaturas em Kelvin: \n");
  for (i=0; i<=23; i++) {
    printf("Temperatura %d : ", i+1);
    scanf("%f", &temperatura[i]);
  }
  //atualiza os valores dentro do vetor utilizando ponteiros
  for (i=0; i<=23; i++) {
    p_temp = &temperatura[i];
    *p_temp = 1.8 * (temperatura[i] - 273) + 32;// convertendo temperatura para Fahrenheit
  }
  printf("Temperaturas convertidas para Fahrenheit: \n");
  //imprimindo os valores (atualizados) do vetor utilizando ponteiros
  for (i=0; i<=23; i++) {
    p_temp = &temperatura[i];
    printf("Temperatura %d : %.2f \n", i+1, *p_temp);
  }
}
