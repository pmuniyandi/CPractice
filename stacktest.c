#include<stdio.h> // input and output operation
#include"stacklib.h"

int main() {
    int opt = 1, value=0; // opt for selection operation in Queue. value for reading new data
    while(opt) { // list option for queue operation
        printf("\n1. Add element in Stack\n"); 
        printf("2. Display elements in Stack\n");
        printf("3. Pop Element\n");
        printf("4. Length Stack\n");
        printf("0. Exit from Stack\n");
        scanf("%d", &opt); // selectin option 
        switch(opt) {
            case 1: // add operion
                printf("Stack Data ");
                scanf("%d", &value);  // reading data from user for queue
                push(value); // adding new element to queue
                break;
             case 2: // list operation
                displayStack(); // this function to display all the data in queue
                break;
            case 3: // add operion
                printf("Stack Pop");
                printf("%d\n", pop());  // reading data from user for queue
                //findElement(value); // adding new element to queue
                break;
             case 4: // list operation
                printf("Size of the Stack %d\n", length()); // this function to display all the data in queue
                break;
        }
    }
}