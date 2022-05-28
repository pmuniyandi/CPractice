#include <stdio.h>
#include<string.h>
int main()
{
    struct person {
        char name[10];
        int age;
    }ptr;
    strcpy(ptr.name,"John");
    ptr.age = 10;
    printf("name = %s\n", ptr.name);
    printf("age = %d\n", ptr.age);
    getchar();
    return 0;
}