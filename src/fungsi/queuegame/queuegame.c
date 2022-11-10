#include "queuegame.h"
#include "../../ADT/array/arraydin.h"
#include "../listgame/listgame.h"
#include "../../ADT/mesinkata/mesinkata.h"
#include <stdio.h>
void displayQueueGame(Queue q){
    if (isEmpty(q)){
        printf("Queue Kosong");
    }
    else{
        printf("Berikut adalah daftar antriaan game-mu: \n");
        for (int i = IDX_HEAD(q); i < IDX_TAIL(q); i++){
            printf("%d. %s", (i - IDX_HEAD(q) + 1), q.buffer[i].Tab);
        }
    }
}
void menuQueueGame(Queue *q, ArrayDin arrayGames){
    displayQueueGame(*q);

    LISTGAME(arrayGames);
    /* asumsi listgame pake adt List, sesuaian */

    int pil;
    printf("Nomor Game yang mau ditambahkan ke antrian: ");
    int i;
    for(i=0; i<currentWord.Length; i++){
        if(currentWord.TabWord[i] >= '0' && currentWord.TabWord[i] <= '9'){
            pil *= 10;
            pil += (int)(currentWord.TabWord[i]-48);
        }
    }
    Kata namaGame = Get(arrayGames, pil - 1);
    /* minta buat fungsi getnama game dari index */
    enqueue(q, namaGame);
}