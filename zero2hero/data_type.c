#include<stdio.h> 

int main() {
    char char_var = 'c';  // 1 
    
    short smallnumber = 10; // 2
   
    int number1 = 100; // 4 definition and declartion, initiation
    long longnumber = 100; // 8

    float float_var = 10.5; //4
    double double_var = 60.f; //8
    printf("Enter char ");   
    scanf("%c", &char_var);
    printf("Enter small number ");  
    scanf("%hd", &smallnumber);
    printf("Enter  number ");  
    scanf("%d", &number1);
    printf("Enter long number ");  
    scanf("%ld", &longnumber);
    printf("Enter float number "); 
    scanf("%f", &float_var);
     printf("Enter doulbe number "); 
    scanf("%lf", &double_var);

    printf("\nChar data %c, %lu, %lu, %p", char_var, sizeof(char), sizeof(char_var), &char_var);
    printf("\nSmall number data %d, %lu, %lu, %p", smallnumber, sizeof(short), sizeof(smallnumber), &smallnumber);
    printf("\nInter data %d, %lu, %lu, %p", number1, sizeof(int), sizeof(number1), &number1);
    printf("\nLong integer %ld, %lu, %lu, %p", longnumber, sizeof(long), sizeof(longnumber), &longnumber);
    printf("\nFloat data %f, %lu, %lu, %p", float_var, sizeof(float), sizeof(float_var), &float_var);
    printf("\nDouble data %f, %lu, %lu, %p", double_var, sizeof(double), sizeof(double_var), &double_var);

    return 0;
}