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
    
    va_start(valist, num);
    va_arg(valist, int);
    va_end(valist);

}

int main() {

}