#include "stack.h"
#include <stdio.h>

void CreateEmpty(Stack *S)
{
    Top(*S) = Nil;
}

boolean IsEmpty(Stack S)
{
    return Top(S) == Nil;
}

boolean IsFull(Stack S)
{
    return Top(S) == MaxEl - 1;
}

void Push(Stack *S, infotype X)
{
    if (IsEmpty(*S))
    {
        Top(*S) = 0;
        InfoTop(*S) = X;
    }
    else
    {
        Top(*S) += 1;
        InfoTop(*S) = X;
    }
}

void Pop(Stack *S, infotype *X)
{
    *X = InfoTop(*S);
    if (Top(*S) == 0)
    {
        Top(*S) = Nil;
    }
    else
    {
        Top(*S) -= 1;
    }
}
