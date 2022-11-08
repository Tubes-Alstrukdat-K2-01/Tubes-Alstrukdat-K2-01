#include "playgame.h"

void menuPlayGame(Queue *Q){
    displayQueueGame(*Q);
    if (!isEmpty(*Q)){
        Word Head;
        dequeue(Q, &Head);
        /* nunggu list game buat nge run permainan yang di head */
        Play(Head); // PLACEHOLDER
    }
}