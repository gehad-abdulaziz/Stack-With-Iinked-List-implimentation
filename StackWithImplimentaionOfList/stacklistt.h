
#include<stdio.h>
#include "linked.h"
#define StackType int
typedef struct stack{
    Linkedlist list;
}Stack;
void CreateStack(Stack *s);
int StackEmpty(Stack *s);
int StackFull(Stack *s);
void Push(StackType e,Stack *s);
void Pop(StackType *e,Stack *s);
void StackTop(StackType *e,Stack *s);
void ClearStack(Stack*s);
int StackSize(Stack *s);
void TraverseStack(Stack *s , void(*pf)(StackType));
