#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct doctor {
    char name[20];
    float fee;
    char sl[20];
   
};

struct darray {
    struct doctor dobj; // data part user defined obj instead of int
    struct darray *nxt; // link
};


struct darray *dlist = NULL;

void listArray() {
    struct darray *head = dlist;
    printf("[");
    while(head != NULL)  {
        printf("(%s,%s,%f)",head->dobj.name, head->dobj.sl, head->dobj.fee);
        if(head->nxt!=NULL) {
            printf(",");
        } 
        head = head->nxt;
    }
    printf("]\n"); 
  
}

void addElement(struct doctor dobj) {
    struct darray *tptr = dlist;

    struct darray *node =  (struct darray *)calloc(1,sizeof(struct darray));
    strcpy(node->dobj.name, dobj.name); 
    node->dobj.fee = dobj.fee; 
    strcpy(node->dobj.sl, dobj.sl);  // data assign to node -> data
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
    struct doctor d1,d2;
    strcpy(d1.name, "Ravi");
    d1.fee = 200;
    strcpy(d1.sl, "asdf");

    strcpy(d2.name, "Raj");
    d2.fee = 1000;
    strcpy(d2.sl, "pqr");

    listArray();
    addElement(d1);
    addElement(d2);
    listArray();
}

