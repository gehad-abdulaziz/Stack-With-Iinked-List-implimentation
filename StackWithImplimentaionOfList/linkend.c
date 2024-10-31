#include <stdio.h>
#include <stdlib.h>
#include "linked.h"
void CreateList(Linkedlist * lq)
{
    lq->head=NULL;
    lq->size=0;
}
int IsFullList(Linkedlist * lq)
{
    return 0;
}
int IsEmptyList(Linkedlist * lq)
{
    return lq->size==0;
}
void Insert(Linkedlist * lq ,LinkedType e , int pos)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->element=e;
    temp->next=NULL;
    if(pos==0)
    {
        temp->next=lq->head;
        lq->head=temp;
    }
    else
    {
        Node *q=lq->head ;
        for(int i =0; i<pos-1 ; i++ , q=q->next);
        temp->next=q->next;
        q->next=temp;
    }
    lq->size++;
}
void Retrieve(Linkedlist * lq ,LinkedType *e , int pos )
{
    Node *q, *temp;
    if(pos==0)
    {
        *e=lq->head->element;
        q=lq->head;
        lq->head=lq->head->next;
        free(q);
    }
    else
    {
        q=lq->head ;
        for(int i =0 ; i<pos-1 ; i++ , q=q->next);
        *e=q->next->element;
        temp=q->next;
        q->next=q->next->next;
        free(temp);
    }
    lq->size--;
}

int Getindex(Linkedlist * lq  , int pos )
{
    if(pos>lq->size)
        return -1;
    Node *q, *temp;
    if(pos==0)
    {
        return lq->head->element;
    }
    else
    {
        q=lq->head ;
        for(int i =0 ; i<pos-1 ; i++ , q=q->next);
        return q->next->element;
    }
}
int ListSize(Linkedlist * lq)
{
    return lq->size;
}
void TraverseList(Linkedlist * lq , void (*pf)(LinkedType ))
{
    Node *q=lq->head;
    while(q)
    {
        (*pf)(q->element);
        q=q->next;
    }
}
void ClearList(Linkedlist * lq)
{
    Node *q=lq->head ;
    while(q)
    {
        lq->head=q->next;
        free(q);
        q=lq->head;
    }
    lq->size=0;
}
