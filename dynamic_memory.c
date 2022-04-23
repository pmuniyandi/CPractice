/*
two dimensional array and ptr
malloc
calloc
realloc
free
*/

/*
    This program to explain access two dimensional array using pointer
*/

#include<stdio.h>
#include <stdlib.h>
/*
int main() {
    int twoDimArray[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int *ptr = &twoDimArray[0][0];
    int *ptr1 = &twoDimArray[0];  // single 
    int *ptr2 = &twoDimArray;

    printf("%p, %p, %p\n", &twoDimArray, &twoDimArray[0], &twoDimArray[0][0]);
    printf("%p, %p, %p\n", ptr, ptr1, ptr2);

    printf("it is using array\n");
    for(int l1=0;l1<3;l1++) { // using array
        for(int l2=0;l2<3;l2++) {
            printf("%p -> %d ", &twoDimArray[l1][l2], twoDimArray[l1][l2]);
        }
        printf("\n");
    }
    printf("it is using array as a pointer\n");
   for(int l1=0;l1<3;l1++) { // use array as pointer
        for(int l2=0;l2<3;l2++) {
            printf("%p -> %d ", (*(twoDimArray+l1)+l2), *(*(twoDimArray+l1)+l2));
        }
        printf("\n");
    }

   printf("it is using pointer refer starting location of address\n");
    for(int l1=0;l1<9;l1++) { // assign starting array address to point
        printf("%p -> %d\n", (ptr+l1), *(ptr+l1));
    }

    printf("it is using pointer refer starting location of address\n");
    for(int l1=0;l1<9;l1++) { // assign starting array address to point
        printf("%p -> %d\n", (ptr1+l1), *(ptr1+l1));
    }

    printf("it is using pointer refer starting location of address\n");
    for(int l1=0;l1<9;l1++) { // assign starting array address to point
        printf("%p -> %d\n", (ptr2+l1), *(ptr2+l1));
    }

}

int main() {
    //int num = 10; 

    //int twoDimArray[3] = {1,2,3};
    int len;
    int *ptr;
    printf("Enter no of data to process ");
    scanf("%d", &len);
    
    ptr = (int *)malloc (len * sizeof(int));  // this user allocation and should be deallocated usiing free
    if(ptr != NULL) { // check always memory get allocated or not
        for(int i=0;i<len;i++) {
            printf("Enter Data ");
            scanf("%d", ptr+i);
        }
        printf("Given Data \n");
        for(int i=0;i<len;i++)
            printf("%p -> %d\n", (ptr+i), *(ptr+i));      
        //printf("\n%lu", sizeof(*ptr));
    } else {
        printf("Memory is not get allocated !!!");
    }
    free(ptr); // always release memory which you allocated
}
*/

/*
int main() {
        //int twoDimArray[3] = {1,2,3};
    int len;
    int *ptr;
    printf("Enter no of data to process "); // ptr = (int *)malloc (len * sizeof(int));
    scanf("%d", &len);
    ptr = (int *)calloc (len, sizeof(int));
    //ptr = (int *)malloc (len * sizeof(int));  // this user allocation and should be deallocated usiing free
    if(ptr != NULL) { // check always memory get allocated or not
        for(int i=0;i<len;i++) {
            printf("Enter Data ");
            scanf("%d", ptr+i);
        }
        printf("Given Data \n");
        for(int i=0;i<len;i++)
            printf("%p -> %d\n", (ptr+i), *(ptr+i));      
        //printf("\n%lu", sizeof(*ptr));
    } else {
        printf("Memory is not get allocated !!!");
    }
    free(ptr); // always release memory which you allocated
}
*/
int main() {

    int len, newlen;
    int *ptr;

    printf("Enter no of data to process "); // ptr = (int *)malloc (len * sizeof(int));
    scanf("%d", &len);
    ptr = (int *)calloc (len, sizeof(int));
    //ptr = (int *)malloc (len * sizeof(int));  // this user allocation and should be deallocated usiing free
    if(ptr != NULL) { // check always memory get allocated or not
        for(int i=0;i<len;i++) {
            printf("Enter Data ");
            scanf("%d", ptr+i);
        }
        printf("Given Data \n");
        for(int i=0;i<len;i++)
            printf("%p -> %d\n", (ptr+i), *(ptr+i));      
        //printf("\n%lu", sizeof(*ptr));
    } else {
        printf("Memory is not get allocated !!!");
    }

    
    printf("added more data, enter no of  data to process "); // ptr = (int *)malloc (len * sizeof(int));
    scanf("%d", &newlen);
    ptr = (int *)realloc (ptr, newlen*sizeof(int));

    
    for(int i=len;i<newlen;i++) {
         printf("Enter new Data ");
        scanf("%d", ptr+i);
    }
    printf("Given newData \n"); 
    for(int i=0;i<newlen;i++)
        printf("%d ", *(ptr+i));      
  
}

/*
    int flag = 1;
    ptr = (int *)calloc (5, sizeof(int));
    int count = 0;
    while(flag) {
        printf("enter value");
        scanf("%d", ptr+count);
        printf("Are you want to continue");
        scanf("%d", &flag);
        count++;
        if(flag)
            ptr = (int *)realloc (ptr, (count+1)*sizeof(int));
    }
    for(int i=0;i<count;i++)
        printf("%d", *(ptr+i));      
} */