/* When you want to ignore logic, but still using it */

#include <stdio.h>

int main(){
    /*As integers, it means nothing, but in memory this is converted to binary*/
    unsigned int set[] = {1635131457, 1293967715,  1701999215, 555819381};
    
    /* Store the first array element position in memory */
    long index = &set[0];
    /* Create a temp char poiter */
    char *temp = NULL;
                       /* First, how many elements there is in the integer array */
                       /* Than. Multiply it by how many chars you can fit in a integer */
    for(int i = 0; i < (sizeof(set) / sizeof(int) ) * ( sizeof(int) / sizeof(char) ); i++){
        /* Parse the content on the index position to a char */        
        temp = (char *) index;
        /* Print the parsed char */
        printf("%c", *temp);
        /* Increment the pointer by one char. Even though it is a integer array */
        index += sizeof(char);
    }
    /* Do not join the execution end on the bash cursor */
    printf("\n");
}
