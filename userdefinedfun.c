
#include <stdio.h>
#include"userdefinedfun.h"
#include"user_define.h"

int main() {
    /*
    int number[] = {10, 20, 30, 40};
    int res = 0;
    char name[] = "ravi"; // char array variabile assign data
    printf("\nBefore calling function %s\n", name); //
    diplayArray(name); // char array variable and display
    printf("\nAfter calling function %s\n", name); //
    printf("\nBefore calling function [%d,%d,%d,%d]\n", 
                number[0], number[1],number[2],number[3]);
    mulby10Ref(number, 4); // call by reference
    printf("\nAfter calling function [%d,%d,%d,%d]\n", 
                number[0], number[1],number[2],number[3]);
    
    res = sumNumberRec(5);
    printf("Sum number %d\n", res);
    */
    printf("%d", SQR(5))   // => printf("%d", 5*5)
 }

 // Function independent module based on arguments.
// output can be through return 
// out can be call be reference.

// don't design function for display using printf
// pre existing other than printf-> no 
// consolidate all the user define function move to user defined header.file
// macro -> constant
// macro -> use as function