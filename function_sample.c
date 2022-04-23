#include<stdio.h>

/*
Creating this function to add tow numbers.
This function will accept two number
This function will return sum of those given two numbers
*/

int addition(int number1, int number2) { //this scope is addition
    int res = 0; // this variable created to store result
    printf("\ninside addition\nnumber1 %p -> %d, number2 %p -> %d\n", &number1, number1, &number2, number2);
    // this is business logic starting
    res = number1 + number2; 
    number1 += number2; // storing the result into number
     // this is business logic ending
    printf("%d, %d", res, number1);
    return res;  // returning result to caller
}

void multipleby10(int *number1, int *number2) { //this scope is addition
    int result = 0; // this variable created to store result
    printf("\ninside multipleby10\nnumber1 %p -> %d, number2 %p -> %d\n", number1, *number1, number2, *number2);
    // this is business logic starting
    *number1 *= 10; 
    *number2 *= 10;
     // this is business logic ending
}

int main() {
    int  number1, number2, result; // this scope is main
    printf("Enter two number for addition "); // user info for giving data
    scanf("%d%d",&number1, &number2);
    printf("\ninside main\nnumber1 %p -> %d, number2 %p -> %d\n", &number1, number1, &number2, number2);
    
    result = addition(number1, number2); // calling user defined function addition operation
    printf("\nafter calling addition\n %d + %d = %d\n", number1, number2,result);
    
    multipleby10(&number1, &number2);
    printf("\nafter calling mulby10\n%d, %d\n", number1, number2);

}

