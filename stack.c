#include<stdio.h> // input and output operation
#include"stackUtil.h"

int main() {
    int opt = 1, value=0; 
    while(opt) { 
        printf("\n1. Add element in Stack\n"); 
        printf("2. Display elements in Stack\n");
        printf("3. Search Element\n");
        printf("4. Length Stack\n");
        printf("0. Exit from Stack\n");
        scanf("%d", &opt); 
        switch(opt) {
            case 1: 
                printf("Stack Data ");
                scanf("%d", &value); 
                push(value);
                break;
             case 2: 
                displayStack();
                break;
            case 3:
                printf("Stack Data to search");
                scanf("%d", &value);  
                //findElement(value); 
                break;
             case 4: 
                //printf("Size of the Stack %d", length()); 
                break;
        }
    }
}