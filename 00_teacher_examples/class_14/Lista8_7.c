/* Considere um vetor de 10 elementos, contendo valores inteiros. Faça um programa que leia os valores para preencher esse vetor, após a leitura o programa deve invocar uma função que calcule e devolva as frequências absoluta e relativa desses valores no conjunto. (Observação: a frequência absoluta de um valor é o número de vezes que esse valor aparece no conjunto de dados; a frequência relativa é a frequência absoluta dividida pelo número total de dados.). Utilize outros dois vetores para armazenar as frequências relativas e absolutas e ao final do programa, imprima de forma tabulada os números e suas frequências absoluta e relativa. */

#include <stdio.h>
#include <stdlib.h>

void frequencias (int *vet, int tam, int *pAbs, float *pRel) {
  int i, j, x, aux;
  //ordenando os dados
  for (i=0; i<tam; i++) {
    for (j=i+1; j<tam; j++) {
      if (vet[i] > vet[j]) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  //calculando as frequencias
  for (i=0; i<tam; i++) {
    pAbs[i] = 1;
    for (j=i+1; j<tam; j++) {
      if (vet[i] == vet[j]) {
        pAbs[i]++;
      } else {
        if (pAbs[i] > 1) {
          for (x=i+1; x<(i+pAbs[i]); x++) {
            pAbs[x] = pAbs[i];
            pRel[x] = (float)pAbs[i] / tam;
          }
        }
        break;
      }
    }
    pRel[i] = (float)pAbs[i] / tam;
    i += pAbs[i]-1;
  }
}

void main () {
  int vetNum[10], i, freqAbs[10];
  float freqRel[10];
  for (i=0; i<10; i++) {
    printf("Informe o valor inteiro %d: ", i+1);
    scanf("%d", &vetNum[i]);
  }
  frequencias(vetNum, 10, freqAbs, freqRel);
  printf("Imprimindo os dados\nNumero\tFreq abs\tFreq Rel\n");
  for (i=0; i<10; i++) {
    printf("%d\t%d\t\t%f\n", vetNum[i], freqAbs[i], freqRel[i]);
  }
}
