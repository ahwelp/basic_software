#include <stdio.h>

double sum(double values[], int tam){
    double sum = 0;
    for(int i = 0; i < tam; i++ ){
        sum += values[i];
    }
    return sum / tam;
}

void main(){
    double array[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    printf("%lf\n", sum(array, 5));

}
