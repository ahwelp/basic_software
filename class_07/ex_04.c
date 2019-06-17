/*
Copie todo o programa anterior, mas altere apenas o tipo do parâmetro 
da função spaces(), que deve ser agora um ponteiro para caracter, ou 
seja, char *p_c. É necessário modificar mais alguma coisa nesta função 
para que ela funcione como anteriormente? Nota: não altere a função main().
*/

#include <stdio.h>
#include <ctype.h>

int spaces(char *string){
    int i, index;
    i = index = 0;
    while(string[i] != '\0'){
        if(isspace( string[i] ) ){ 
            printf("%c", '_');
            index++; 
        }else{
            printf("%c", string[i]); 
        }
        i++;
    }    
    printf("\n");
    return index;
}

int main(){
    char *string = "This is a character sequence With pointers";    
    int value = spaces(string);
    printf("There is %d Spaces in the String\n", value);
}
