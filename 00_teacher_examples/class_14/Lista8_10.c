/* O departamento comercial da Batatinha S/A necessita atualizar os valores de seus produtos no seu catálogo de vendas. O presidente ordenou um reajuste de 4.78% para todos os itens. São 15 itens no catálogo. Sua tarefa é elaborar um programa que leia o valor atual dos produtos e armazene em um vetor, e após isso efetue o reajuste no valor dos produtos. O reajuste (acesso ao vetor) deverá ser feito utilizando ponteiros. Imprima na tela o valor reajustado, usando também ponteiros. */

#include <stdio.h>
#include <stdlib.h>

void main () {
  int i;
  float catalogo[15], *p_cat;
  //coletando valor dos produtos
  printf("Informe os valor dos produtos: \n");
  for(i=0; i<=14; i++) {
    p_cat = &catalogo[i];
    printf("Informe o valor do item %d do catalogo: ", i+1);
    scanf("%f", p_cat);
  }
  //atualizando catalogo de precos atraves do ponteiro
  for(i=0; i<=14; i++) {
    p_cat = &catalogo[i];
    *p_cat = *p_cat * 1.0478;
    //imprimindo catalogo(atualizados)
    printf("Preco reajustado do item %d : %.2f \n", i+1, *p_cat );
  }
}
