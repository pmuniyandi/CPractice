#include<stdio.h>
#include<stdlib.h> 
struct dynstack {
    int data; // storing data
    struct dynstack *nxt; // storing next node reference
};

struct dynstack *head=NULL; 

void push(int value) {
    struct dynstack *tptr = head; // travel pointer
    // new object allocated for new data
    // new object
    struct dynstack *node = (struct dynstack *)malloc(1*sizeof(struct dynstack)); 
    node->data = value; // incoming data assign to new element
    node->nxt = NULL;
    // end here
    // very first time
    if(tptr == NULL || head == NULL) {
        head = node; 
        return; 
    } 
    // very first time
    // this for all other time
    head = node;
    node->nxt = tptr;
    //
}

int pop() {
    struct dynstack *tptr = head; // travel pointer
    int temp = head->data;
    head = head->nxt;
    tptr->data = 0;
    free(tptr); // way to release unused object.
    printf("After free -> %d ", tptr->data);
    return temp;
}

int length() {
    int len = 0;
    struct dynstack *tptr = head; // travel pointer
    while(tptr != NULL) {
        tptr = tptr->nxt;
        len++;
    }
    return len;
}

void displayStack() {
    printf("[");
    struct dynstack *tptr = head;
    while(tptr) {
         printf("%d",tptr->data); 
        //printf("(%p : %d -> %p)", tptr,tptr->data, tptr->nxt); //current object address, Data, next object address
        if(tptr->nxt) 
            printf(",");
        tptr = tptr->nxt;
    }
    printf("]");
}
// link list
// Queue -> FIFO
// Stack -> LIFO -> FILO
// list  -> Random access  
// set -> duplicate
// Dic/Json -> {"name":"Perumal", "DOB":"01/02/1980"} 

// link list -> 
// circular link list
// double link , cdl
// binary tree
// different travel binary tree
