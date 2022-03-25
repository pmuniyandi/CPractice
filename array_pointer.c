/*
Creating array and travel using pointers
*/

#include <stdio.h>
// Call by value function
void multipleby100(int number){
     number = number*100;
     printf("%d , %p\n", number,&number);
}
void multiplebyref100(int number[]){
     number[0] = number[0]*100;
     printf("%d , %p\n", number[0],number);
}
int main() {
    long int marks[] = {10, 20, 30, 40};
    // Travel using index
    //printf("%p\n", marks);
    //printf("%p, %p, %p, %p\n", &marks[0], &marks[1], &marks[2], &marks[3]);
    //printf("%ld, %ld, %ld, %ld\n", marks[0], marks[1], marks[2], marks[3]);
    // Travel using pointer
    //printf("%p, %p, %p, %p\n", (marks+0), (marks+1), (marks+2), (marks+3));
    //printf("%ld, %ld, %ld, %ld\n", *(marks+0), *(marks+1), *(marks+2), *(marks+3));
    int number = 10;
    printf("%d , %p\n", number,&number);

    multipleby100(number);
    printf("%d , %p\n", number,&number);

    int num[] = {10};
    printf("%d , %p\n", num[0],num);

    multiplebyref100(num);
    printf("%d , %p\n", num[0],num);
}