

#include<stdio.h>

//#define MON 1
//#define TUE 2
//#define WED 3
//#define THU 4
//#define FRI 5

enum workday {MON=2, TUE, WED, THU, FRI};

const int mon = 1;
const int tue = 2;
const int wed = 3;
const int thu = 4;
const int fri = 5;

int main() {
    //union union1 u1; // creating variable
  
    //u1.number1 = 20;
    //u1.number2 = 30;

    //printf("%d %d\n", u1.number1, u1.number2);

    printf("%d, %d, %d, %d, %d %lu", MON, TUE, WED, THU, FRI,sizeof(enum workday));
}


void fun1 () {

}

main() {

}
