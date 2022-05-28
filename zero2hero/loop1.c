// display multiplication table upto 15 for given number
#include<stdio.h>

int main() {
    int tablenumber = 0;
    printf("Table # ? ");
    scanf("%d", &tablenumber);
    for(int loop = 1;loop<15;loop++) { //logical block
        printf("%d * %d = %d\n",loop, tablenumber, loop*tablenumber);
    }
 }