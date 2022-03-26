/*
1. Creating array travel using index
2. How to use array name as pointer and travel like pointer
3. User defined function
4. Function overloading (c++)!
5. Call by value

6. Call by reference
7. Recursive funtion

/*
8. Variable of length function
     #include <stdarg.h>, header
     va_list valist; declare variable
     va_start(valist, num);  allocate memory
     va_end(valist); clean member
     va_arg(valist, int); access data
*/

#include <stdio.h>

int main() {
     int marks[] = {80,90,87,56,88};
     // Travel using location/index
     printf("Array travel by index/location  %ld\n", sizeof(int));
     printf("%p\n", marks);
     for(int loop=0;loop<5;loop++) { // access by location/index
          printf("%d -> %p -> %d\n", loop, &marks[loop], marks[loop]);
     }
     // marks[0] -> marks + 0 847e
     // marks[1] -> marks + 1 8480
     printf("Array travel by array name as address  %ld\n",sizeof(int));
     printf("%p\n", marks);
     for(int loop=0;loop<5;loop++) { // access by location/index
          printf("%d -> %p -> %d\n", loop, marks+loop, *(marks+loop));
     }
}
