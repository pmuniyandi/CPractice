

#include<stdio.h>
enum workday {MON=10, TUE=12, WED=9, THU, FRI};

struct struct1
{
    int a;
    int b;
};

union union1
{
    int a;
    int b;
};



int main() {
    struct struct1 s1;
    s1.a = 20;
    s1.b = 30;
    printf("%lu %d %d\n", sizeof(s1),s1.a, s1.b);

    union union1 u1;
    u1.a = 20;
    u1.b = 30;
    printf("%lu %d %d\n", sizeof(u1),u1.a, u1.b);

    printf("%d, %d, %d, %d, %d %lu", MON, TUE, WED, THU, FRI,sizeof(enum workday));
}
