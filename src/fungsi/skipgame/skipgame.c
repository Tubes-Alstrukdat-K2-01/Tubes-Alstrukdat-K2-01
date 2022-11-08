#include "../../ADT/normalqueue/queue.h"


void menuSkipGame(Queue *Q, int skip){
    displayQueueGame(*Q);
    if (skip > length(*Q)){
        printf("Tidak ada permainan lagi dalam daftar game-mu.");
    }
    else{
        Word x;
        for (int i = 0; i < skip; i++){
            dequeue(Q, &x);
        }
    }
    Word Head;
    dequeue(Q, &Head);
    /* nunggu list game buat nge run permainan yang di head */
    Play(Head); // PLACEHOLDER
};
