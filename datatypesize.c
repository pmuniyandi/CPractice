//
//  datatype.c
//  
//
//  Created by Muniyandi Perumal on 04/11/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
        printf("CHAR SIZE   :   %lu\n", sizeof(char));
        printf("CHAR_MAX    :   %d\n", CHAR_MAX);
        printf("CHAR_MIN    :   %d\n", CHAR_MIN);
        printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
        printf("SHRT SIZE   :   %lu\n", sizeof(short));
        printf("SHRT_MAX    :   %d\n", SHRT_MAX);
        printf("SHRT_MIN    :   %d\n", SHRT_MIN);
        printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
        printf("INT SIZE    :   %lu\n", sizeof(int));
        printf("INT_MAX     :   %d\n", INT_MAX);
        printf("INT_MIN     :   %d\n", INT_MIN);
        printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
        printf("LONG SIZE   :   %lu\n", sizeof(long));
        printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
        printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
        printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
}
