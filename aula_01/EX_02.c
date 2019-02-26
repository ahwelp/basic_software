#include <stdio.h>
#include <math.h>

int main(){

    int number = 0;
    int add_factor = 1;
    int temp = 0;
    for(int i = 1; i <= 9; i++){
        number = i;
        temp = add_factor;
        for(int j = 1; j < i; j++){            
            number += j * add_factor / pow(10, j-1);
        }
        add_factor *= 10;
        printf("%d\n", number);        
    }

    add_factor /= 10;

    for(int i = 1; i <= 9; i++){
        number -= i * add_factor;
        add_factor /= 10;
        printf("%09d\n", number); 
    }

}

