#include "playgame.h"

void menuPlayGame(Queue *Q){
    displayQueueGame(*Q);
    if (!isEmpty(*Q)){
        Kata Head;
        dequeue(Q, &Head);
        /* nunggu list game buat nge run permainan yang di head */
        Play(Head); // PLACEHOLDER
    }
    else{
        printf("Antrian Game yang akan dimainkan kosong!\n");
    }
}
void Play(Kata W){
    if  (IsKataEqual(W, StringtoKata("RNG"))){
        printf("\nLoading game RNG...\n");
        RNG();
    } else if (IsKataEqual(W, StringtoKata("DINER DASH"))){
        printf("\nLoading game Dinner Dash...\n");
        dinerdash();
    } else if (IsKataEqual(W, StringtoKata("HANGMAN"))){
        printf("\nLoading game HANGMAN...\n");
        hangman();
    } else if (IsKataEqual(W, StringtoKata("DINOSAUR IN EARTH"))){
        printf("\nGame DINOSAUR IN EARTH masih dalam maintenance, belum dapat dimainkan. Silahkan pilih game lain.\n");
    } else if (IsKataEqual(W, StringtoKata("RISEWOMAN"))){
        printf("\nGame RISEWOMAN masih dalam maintenance, belum dapat dimainkan. Silahkan pilih game lain.\n");
    } else if (IsKataEqual(W, StringtoKata("EIFFEL TOWER"))){
        printf("\nGame EIFFEL TOWER masih dalam maintenance, belum dapat dimainkan. Silahkan pilih game lain.\n");
    } else {
        srand(time(0));
        int skor = (rand()*3)%100 + 1;
        printf("\nLoading %s...\n",W.Tab);
        printf("Skor Akhir dari game %s adalah %d\n",W.Tab,skor);
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