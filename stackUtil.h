#include<stdio.h>
#include<stdlib.h> 
struct dstack {
    int data; 
    struct dstack *nxt; 
};

struct dstack *head=NULL; 
void push(int value) {
    struct dstack *tptr = head;
    struct dstack *node = (struct dstack *)malloc(1*sizeof(struct dstack)); 
     node->data = value;
     node->nxt = NULL;
    if(tptr == NULL || head == NULL) {
        head = node; 
        return; 
    } 
    node->nxt = tptr;
    head = node; 
}
void displayStack() {
    printf("[");
    struct dstack *tptr = head;
    while(tptr) {
        printf("%d", tptr->data);
        if(tptr->nxt) 
            printf(",");
        tptr = tptr->nxt;
    }
    printf("]");
}