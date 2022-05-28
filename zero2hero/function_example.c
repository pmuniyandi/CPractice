#include<stdio.h>
//This is function will input number, if odd -> 1 or 0
int checkOdd(int number) {
    return (number % 2);
}

//This is function will input number, if even -> 1 or 0
int checkEven(int number) {
    return !checkOdd(number);
}

int fact(int number) {
    int frl = 1;
    for(int loop = 1; loop <=number; loop++) {
        frl *= loop;
    }
    return frl;
}

int factorial(int number) { // 3
    if(number == 1) 
        return number;
    else 
        return number * factorial(number - 1); 
}

int main() {
    int number;
    scanf("%d",&number);
    if(checkEven(number)) 
        printf("Even Number\n");
    else 
        printf("Odd Number\n");
    
    printf("%d\n", factorial(number));
    
}

