#include "deletegame.h"

void DELETEGAME (ArrayDin *arrayGames){
    int del, i;
    
    LISTGAME(*arrayGames);
    printf("Masukkan nomor game yang akan dihapus: ");
    scanf("%d", &del);
    
    if ((del>=1) && (del<=5)){
        printf("Game gagal dihapus \n");
    }

    else if (del>5){
        i = del-1;
        DeleteAt(arrayGames, i);
        printf("Game berhasil dihapus \n");
    }
        
}