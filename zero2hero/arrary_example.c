#include<stdio.h>

void displayArray(int numbers[], int count) {
    for(int loop=0; loop<count;loop++) {    
        printf("%d ",numbers[loop]); 
    }

}


int main() {
    int numbers[50],count; //input
    int divby10[50], countten=0; // array will have number div 10
    int divnotby10[50], countnoten=0; // array will have number not div 10
    // get all user input
    printf("No of elements ?");
    scanf("%d", &count);
    for(int loop=0; loop<count;loop++) {
        printf("elements ?");
        scanf("%d",&numbers[loop]);
    }
// get all user input
// checking all my input and store in two different array
    for(int loop=0; loop<count;loop++) {
        if((numbers[loop] % 10) ==0) {
           divby10[countten] = numbers[loop];
           countten++;
        } else {
            divnotby10[countnoten] = numbers[loop];
            countnoten++;   
        }
    }

    printf("\nGiven elements \n");
    displayArray(numbers,count);
    //for(int loop=0; loop<count;loop++) {
    //    printf("%d ",numbers[loop]); 
    //}
    
    printf("\nElements div by 10\n");
    displayArray(divby10,countten);
    //for(int loop=0; loop<countten;loop++) {
    //    printf("%d ",divby10[loop]); 
    //}
    
    printf("\nElements not div by 10\n");
    displayArray(divnotby10, countnoten);
    //for(int loop=0; loop<countnoten;loop++) {
    //    printf("%d ",divnotby10[loop]); 
    //}
}

