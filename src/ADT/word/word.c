#include "word.h"
void CopyWord(Word *Win, Word *Wout){
    (*Wout).Length = (*Win).Length;
    int i;
    for(i=0; (*Win).Length; i++){
        (*Wout).Tab[i] = (*Win).Tab[i];
    }
}

void MakeWord(Word *W){
    (*W).Length = 0;
}

void CopyStringtoWord(Word *W, char *s){
    MakeWord(W);
    int i=0;
    while(s[i] != '\0'){
        (*W).Tab[i] = s[i];
        (*W).Length++; 
        i++;
    }
    for(i; i<50; i++){
        (*W).Tab[i] = '\0';
    } //jadiin null biar ga  overflow
}
boolean IsWordEqual(Word W1, Word W2){
    if(W1.Length != W2.Length){
        return false;
    }
    else{
        int i;
        for(i=0; i<W1.Length; i++){
            if(W1.Tab[i] != W2.Tab[i]){
                return false;
            }
        }
        return true;
    }
}
Word StringtoWord(char *s){
    Word W;
    CopyStringtoWord(&W, s);
    return W;
}