
/*
Crie um programa que declare e inicialize três variáveis dos tipos char, double e int. 
Então crie três ponteiros, um para cada tipo. A seguir, inicialize os ponteiros para que apontem para 
as respectivas variáveis. Finalmente, imprima na tela o valor apontado por cada ponteiro.
*/

#include <stdio.h>
int main(){
    
    char   var_char = 'g';
    double var_db   = 600.006;
    int    var_int  = 5000;

    int    *point_int  = NULL;
    char   *point_char = NULL;
    double *point_db = NULL; 

    point_int = &var_int;
    point_db = &var_db;
    point_char = &var_char;
        
    printf("%d\n", *point_int);
    printf("%lf\n", *point_db);
    printf("%c\n", *point_char);

}
