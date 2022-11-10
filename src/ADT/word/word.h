#ifndef __Word_H
#define __Word_H
#include "../boolean.h"
typedef struct {
    char Tab[50];
    int Length;
} Word;
void CopyWord(Word *Win, Word *Wout);
void MakeWord(Word *W);
void CopyStringtoWord(Word *W, char *s);
Word StringtoWord(char *s);
boolean IsWordEqual(Word W1, Word W2);
#endif