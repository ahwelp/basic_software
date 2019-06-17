#include <stdio.h>
/*
Escreva uma função chamada print_matrix(), que recebe uma matriz de valores 
reais de dimensões 5 por 5 e a imprime na tela, alinhando suas colunas. 
Então, a partir da função main(), crie duas matrizes 5x5. A primeira deve 
conter os valores de 1 a 25, sendo inicializada em sua criação. A segunda deve 
ser criada "vazia", sendo inicializada como uma matriz identidade usando dois
laços de repetição. Ambas as matrizes devem então ser impressas com a função
criada anteriormente. 
Sugestão: declare o parâmetro da função print_matrix() usando as duas dimensões 
da matriz, ou seja, double m[5][5].

*/

void print_matrix(int matrix[][]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%03d | ");
        }
        printf("\n");
    }
   
}

void main(){
    
}






