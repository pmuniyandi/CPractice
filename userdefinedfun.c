
#include <stdio.h>

/*void mr(char name[]) {
    printf("Mr %s\n ",name);
}

int sum(int n1, int n2) {
    return n1 + n2;
}

int sum1(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}
*/
// call by value function
// returning change outside
/*int addby10(int number) { // umber variable is local to fun1
    printf("Inside before modify %p -> %d\n", &number, number);
    //return
    number = number + 10; // number is 99
    printf("Inside after modify %p -> %d\n", &number, number);
    return number; // 99
   
}*/

// Accept array data and display using char array
/*void diplayArray(char name[]) { // creating new variable name and give passing argument data
    // name[loop] != '\0' equal name[loop]
    printf("\nI B %s %p\n", name, name);
    
    //name = "Rajkumar";
    
    for(int loop = 0; name[loop] != '\0' ; loop++) { // looping through until 
        printf("%c",name[loop]);
        name[loop] = name[loop] - 32;
    }
    printf("\nI A %s %p\n", name, name);
}*/
// call by value
//number number variable created for mulby10
// what our modification we do for number, it will local scope to this function
// Simple data
/*void mulby10(int number) {
    number = number + 10;
}
// fun argument is array
// travlling and modifying data of array
// not returning
// array data
void mulby10Array(int number[], int size) {
    for(int loop=0; loop<size; loop++) {
        number[loop] = number[loop] * 10;
    }
}*/
/*void callbyref(int *ptr) {
    printf("\nPointer %p -> %d\n", ptr, *ptr);
    *ptr = (*ptr + 10);
    printf("\nPointer %p -> %d\n", ptr, *ptr);
}*/
/*void mulby10Array(int number[], int size) {
    for(int loop=0; loop<size; loop++) {
        number[loop] = number[loop] * 10;
    }
}
// number[0] -> number + 0
void mulby10Ref(int *ptr, int size) {
    for(int loop=0; loop<size; loop++) {
        *(ptr+loop) =  (*(ptr+loop)) * 10; // first location address and travel by loop
    }
}
*/
// writing a function
// call that function in other function mostly on main function
// Recursive function
// calling same function inside the function  

/* int sumNnumber(int n) {
    int sum = 0;
    for(int loop=1;loop<=n;loop++) {
        sum = sum + loop;
    }
    return sum;
} // regular function doing math

int sumNnumberRec(int n) {
    if(n==1) 
        return 1; // exit condition
    else 
        return n + sumNnumberRec(n-1);
} // recursive function
*/


int main() {

 }