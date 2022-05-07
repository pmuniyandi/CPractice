#include<stdio.h>
#include<stdlib.h>

struct darray {
    int data;
    struct darray *nxt;
};
struct darray *dlist = NULL;

void listArray() {
    struct darray *head = dlist;
    printf("[");
    while(head != NULL)  {
        printf("%d",head->data);
        if(head->nxt!=NULL) {
            printf(",");
        } 
        head = head->nxt;
    }
    printf("]\n"); 
  
}

void addElement(int data) {
    struct darray *tptr = dlist;
    struct darray *node =  (struct darray *)calloc(1,sizeof(struct darray));

    node->data = data;
    node->nxt = NULL;
     if(tptr == NULL) {
        dlist = node;
        return;
     } 
     while(tptr->nxt!=NULL) {
         tptr = tptr->nxt;
     }
    tptr->nxt = node;
}

int main() {

    listArray();
    addElement(10);
    addElement(20);
    listArray();
}

