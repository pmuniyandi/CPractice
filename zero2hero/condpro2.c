#include<stdio.h>

// Calculator for +, - , *, /
int main() {
    int number1 = 0, number2 = 0;
    float result = 0.0;
    char opt='+';
    printf("First number ? ");
    scanf("%d", &number1);
    printf("Second number ? ");
    scanf("%d", &number2);
    scanf("%c",&opt);
    printf("Calculation option (+, -, *, /)");
    scanf("%c",&opt);
    switch (opt)
    {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / (float)number2;
            break;
    }
    printf("%d %c %d = %.2f\n", number1,opt, number2, result);
}
