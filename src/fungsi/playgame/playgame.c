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
        Kata Head;
        dequeue(Q, &Head);
        /* nunggu list game buat nge run permainan yang di head */
        Play(Head); // PLACEHOLDER
    }
}
void Play(Kata W){
    if  (IsKataEqual(W, StringtoKata("RNG"))){
        printf("Loading game RNG...\n");
        RNG();
    } else if (IsKataEqual(W, StringtoKata("DINNERDASH"))){
        printf("Loading game Dinner Dash...\n");
        dinerdash();
    } else if (IsKataEqual(W, StringtoKata("HANGMAN"))){
        printf("Loading game HANGMAN...\n");
        hangman();
    } else {

    }
}
// int main(){
//     Queue Q;
//     CreateQueue(&Q);
//     enqueue(&Q, StringtoKata("RNG"));
//     enqueue(&Q, StringtoKata("DINNERDASH"));
//     ArrayDin A = MakeArrayDin();
//     InsertAt(&A, StringtoKata("RNG"),0);
//     InsertAt(&A, StringtoKata("DiNNERDASH"),0);

//     menuPlayGame(&Q);

//     return 0;
// }