/*8. Variable of length function
     #include <stdarg.h>, header
     va_list valist; declare variable
     va_start(valist, num);  allocate memory
     va_end(valist); clean member
     va_arg(valist, int); access data
*/

#include <stdarg.h>
#include <stdio.h>

int sumnumbers(int number, ...) {
    va_list valist; 
    int sum = 0;
    va_start(valist, number);
    for (int loop = 0; loop < number; loop++) {
      sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum;
}

int displayname(int number, ...) {
    va_list valist; 
    int sum = 0;
    va_start(valist, number);
    for (int loop = 0; loop < number; loop++) {
      printf("%s", va_arg(valist, char*));
    }
    va_end(valist);
    return sum;
}

int main() {
    printf("Average of 2, 3, 4, 5 = %d\n", sumnumbers(4, 2,3,4,5));
    displayname(2, "Muni","Ravi");
}