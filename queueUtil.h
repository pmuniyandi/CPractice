#include<stdio.h>
#include<stdlib.h> // dynamic memory allocation
// this user defined queue for creating dynamic queue
struct dqueue {
    int data; // storing data
    struct dqueue *nxt; // storing next node reference
};

struct dqueue *head=NULL; // to store starting queue address [10, 20, 30] => []
// function for adding new element in queue towards the end of the queue
void addElement(int value) {
    struct dqueue *tptr = head;

    // allocting memory as new node
    //struct dqueue *node = (struct dqueue *)calloc(1,sizeof(struct dqueue)); // it will return adderss
    struct dqueue *node = (struct dqueue *)malloc(1*sizeof(struct dqueue)); 
    // assign incoming data
    node->data = value;
    // making new reference as null
    node->nxt = NULL;

    // adding element as fist node -- Starting
     if(tptr == NULL || head == NULL) {
        head = node; 
        return; // exiting from 
     } 
     // adding element as fist node -- Ending

    // adding element towards the end the queue -- Starting
     while(tptr->nxt!=NULL) { 
         tptr = tptr->nxt;
     }
    tptr->nxt = node;
    // adding element towards the end the queue -- End of logic
}
// displaying all the element in the queue
void displayQueue() {
    printf("[");
    struct dqueue *tptr = head;
    while(tptr) {
        printf("%d", tptr->data);
        if(tptr->nxt) 
            printf(",");
        tptr = tptr->nxt;
    }
    printf("]");
}