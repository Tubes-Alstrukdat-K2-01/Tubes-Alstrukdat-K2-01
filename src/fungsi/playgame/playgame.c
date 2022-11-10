#include "playgame.h"
#include "../../ADT/RNG/RNG.h"
#include "../../ADT/ADT_DinerDash/dinerdash.h"
#include "../../ADT/array/arraydin.h"
#include <stdio.h>
#include "../queuegame/queuegame.h"
#include "../../ADT/hangman/hangman.h"
void menuPlayGame(Queue *Q){
    displayQueueGame(*Q);
    if (!isEmpty(*Q)){
        Word Head;
        dequeue(Q, &Head);
        /* nunggu list game buat nge run permainan yang di head */
        Play(Head); // PLACEHOLDER
    }
}
void Play(Word W){
    if  (IsWordEqual(W, StringtoWord("RNG"))){
        printf("Loading game RNG...");
        RNG();
    } else if (IsWordEqual(W, StringtoWord("DINNERDASH"))){
        printf("Loading game Dinner Dash...");
        dinerdash();
    } else if (IsWordEqual(W, StringtoWord("HANGMAN"))){
        printf("Loading game HANGMAN...");
        hangman();
    } else {

    }
}
// int main(){
//     Queue Q;
//     CreateQueue(&Q);
//     enqueue(&Q, StringtoWord("RNG"));
//     enqueue(&Q, StringtoWord("DINNERDASH"));
//     ArrayDin A = MakeArrayDin();
//     InsertAt(&A, StringtoWord("RNG"),0);
//     InsertAt(&A, StringtoWord("DiNNERDASH"),0);

//     menuPlayGame(&Q);

//     return 0;
// }