
/*
1. Variable lenth function # second half of the session

2. Macro as value
    # define PI 3.14
3. Constant
    const int pi=3.14
4. Constant vs Macro
5. Macro as function
6. Macro vs Function
6. Enum
     enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  

6. Command line argument/Main function argument.
    int argc, char **argv
7. travel two dimensional array by and pointer

union data { # data 
    char c = 'a'; # 1 byte
    int i = 20 # 2
};
*/

#include<stdio.h>

struct coordinate {  // define
    long int y; // member varaiable
    int x; // member variable
    short int z;
};

union data { // data 
    int x; // 1 byte
    int y; // 2
};

// int inside some of the c lib
int main(int argc, char **argv)  
{  

    struct coordinate coor1; // declare new variable using user defined data
    union data d1;
    coor1.x = 10; // accessing member and assign a data
    coor1.y = 22;
    d1.x = 10;
    d1.y = 30;
    printf("(x, y) = (%d, %ld), %lu\n", coor1.x, coor1.y, sizeof(coor1));
    printf("(x, y) = (%d, %d)\n", d1.x, d1.y);
}   
