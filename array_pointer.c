/*
Creating array and travel using pointers
*/

#include <stdio.h>
int main() {
    long int marks[] = {10, 20, 30, 40};
    // Travel using index
    printf("%p, %p, %p, %p\n", &marks[0], &marks[1], &marks[2], &marks[3]);
    printf("%ld, %ld, %ld, %ld\n", marks[0], marks[1], marks[2], marks[3]);
    // Travel using pointer
    printf("%p, %p, %p, %p\n", (marks+0), (marks+1), (marks+2), (marks+3));
    printf("%ld, %ld, %ld, %ld\n", *(marks+0), *(marks+1), *(marks+2), *(marks+3));
}