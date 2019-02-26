#include <stdio.h>

int main(){

    /**
    * SCRIPT COM LACOS ANINHADOS, UM PARA CADA POSICAO
    */
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j<= 9; j++ ){
            for(int k = 0; k <= 9; k++){
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
    
    /**
    * ALTERNATIVA COM UM UNICO LACO
    */
    for(int i = 0; i<=999; i++){
        printf("%03d\n", i);
    }

}

