#include <stdio.h>
#include "stacklistt.h"
#include "linked.h"
void print(StackType e)
{
    printf("%d " , e);
}
int main()
{
    Stack s;
    CreateStack(&s);
    for(int i =0 ; i<7 ; i++)
    {
        Push(i , &s);
    }
    TraverseStack(&s , &print);
    if(StackEmpty(&s))
        printf("is empty");
    else
        printf("not empty");
}

