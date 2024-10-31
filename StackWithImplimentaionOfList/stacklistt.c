#include "stacklistt.h"
#include "linked.h"
#include <stdlib.h>
void CreateStack(Stack *s)
{
    CreateList(&s->list);
}
int StackEmpty(Stack *s)
{
    return IsEmptyList(&s->list);
}
int StackFull(Stack *s)
{
    return IsFullList(&s->list);
}
void Push(StackType e,Stack *s)
{
    Insert(&s->list , e , 0);
}
void Pop(StackType *e,Stack *s)
{
    if(!IsEmptyList(&s->list))
       {
           Retrieve(&s->list , e , 0);
       }
}
void StackTop(StackType *e,Stack *s)
{
    *e=Getindex(&s->list, 0);
}
void ClearStack(Stack*s)
{
    ClearList(&s->list);
}
int StackSize(Stack *s)
{
    return ListSize(&s->list);
}
void TraverseStack(Stack *s , void(*pf)(StackType))
{
    TraverseList(&s->list , pf);
}

