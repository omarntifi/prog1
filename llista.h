
//Create by Omar Ntifi Matarín - llista.h


//Define types
#include <stdio.h>

typedef struct n {
    int i;
    struct n -> next;
    struct n -> prev;
}Node;

typedef struc n {
    Node *start;
    Node *final;
}BidOrdList;