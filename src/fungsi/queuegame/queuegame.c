#include "queuegame.h"
#include "../../ADT/array/arraydin.h"
#include "../listgame/listgame.h"
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
    scanf("%d", &pil);
    Kata namaGame = Get(arrayGames, pil - 1);
    /* minta buat fungsi getnama game dari index */
    enqueue(q, namaGame);
}