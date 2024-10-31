#ifndef LINKED_H
#define LINKED_H

#include <stdlib.h>
#include <stdio.h>
typedef int LinkedType;
typedef struct node
{
    LinkedType element;
    struct node * next;
}Node;
typedef struct linkedlist
{
    Node* head;
    int size;
}Linkedlist;
void CreateList(Linkedlist * lq);
int IsFullList(Linkedlist * lq);
int IsEmptyList(Linkedlist * lq);
void Insert(Linkedlist * lq ,LinkedType e , int pos);
void Retrieve(Linkedlist * lq ,LinkedType *e , int pos );
int Getindex(Linkedlist * lq  , int pos );
int ListSize(Linkedlist * lq);
void TraverseList(Linkedlist * lq , void (*pf)(LinkedType ));
void ClearList(Linkedlist * lq);

#endif
