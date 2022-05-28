#include<stdio.h>

int main() {
    //Declaration starts
    int no1=0, no2=0, no3=0, big=0;
    //Declaration ends
    // reading data
    printf("Enter three numbers ");
    scanf("%d%d%d", &no1, &no2, &no3);
    // reading data
    // logic block
    if(no1 > no2 && no1 > no3)  // n1 compare with n2 and n3
        big = no1;
    else if(no2 > no3) // if n1 is not greater
        big = no2;
    else
        big = no3;
  // logic block
    // display
    printf("%d is bigges number in [ %d, %d, %d]", big,no1,no2,no3);
    // display
}