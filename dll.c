#include<stdio.h>
#include<stdlib.h>

struct dll {
    int data;  // data part
    struct dll *nxt; // to refer my next node
    struct dll *pre; // to refer my previous node
};
struct dll *dlist = NULL; // starting point to point my dll

void listArray() {
    struct dll *head = dlist;
    printf("[");
    while(head != NULL)  {
        printf("%p <- (%p, %d) -> %p",head->pre, head, head->data, head->nxt);
        if(head->nxt!=NULL) {
            printf(",");
        } 
        head = head->nxt;
    }
    printf("]\n"); 
  
}

void addElement(int data) {
    struct dll *tptr = dlist; // travel point travel

    struct dll *node =  (struct dll *)calloc(1,sizeof(struct dll)); // new node
    node->data = data; // assign incoming data to my new node
    node->nxt = NULL; // next node and pre node making to null
    node->pre = NULL; // next node and pre node making to null

     if(tptr == NULL) { // if travel null, simply attaching my new node
        dlist = node;
        return;
     } 

     while(tptr->nxt!=NULL) {  // till my last node
         tptr = tptr->nxt;
     }
     
    tptr->nxt = node; // current next point new node
    node->pre = tptr; // new node pre point my current
}

int main() {

    listArray();
    addElement(10);
    addElement(20);
    addElement(30);
    addElement(40);
    listArray();
}

