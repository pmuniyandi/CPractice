//
//  datatype.c
//  
//
//  Created by Muniyandi Perumal on 04/11/21.
//

#include <stdio.h>
int main() {
    char c = 'a';
    short s = 10;
    int i = 10;
    float f = 10.0;
    double d = 15;
    printf("%c %d %d %f %lf\n", c, s, i, f, d);
    printf("%x %x %x %x %x\n", &c, &s, &i, &f, &d);
    printf("%d %d %d %d %d %d %d %d %d\n", sizeof(char), sizeof(short), sizeof(long), sizeof(int), sizeof(float), sizeof(double), sizeof(long int), sizeof(long double), sizeof(long long int));
}

