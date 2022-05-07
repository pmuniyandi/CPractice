#include<stdio.h> // input and output operation
#include"queueUtil.h"

int main() {
    int opt = 1, value=0; // opt for selection operation in Queue. value for reading new data
    while(opt) { // list option for queue operation
        printf("\n1. Add element in Queue\n"); 
        printf("2. Display elements in Queue\n");
        printf("3. Search Element\n");
        printf("4. Length Queue\n");
        printf("0. Exit from Queue\n");
        scanf("%d", &opt); // selectin option 
        switch(opt) {
            case 1: // add operion
                printf("Queue Data ");
                scanf("%d", &value);  // reading data from user for queue
                addElement(value); // adding new element to queue
                break;
             case 2: // list operation
                displayQueue(); // this function to display all the data in queue
                break;
            case 3: // add operion
                printf("Queue Data to search");
                scanf("%d", &value);  // reading data from user for queue
                findElement(value); // adding new element to queue
                break;
             case 4: // list operation
                printf("Size of the Queue %d", length()); // this function to display all the data in queue
                break;
        }
    }
}