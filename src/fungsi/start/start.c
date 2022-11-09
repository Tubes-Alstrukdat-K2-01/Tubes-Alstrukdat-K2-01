#include "start.h"
#include <stdio.h>

void START(ArrayDin *TabGame, boolean *start){
    if(*start){
        printf("Proses Start tidak berhasil dilakukan karena BNMO telah dijalankan!\n");
    }
    else{
        *start = false;
        *TabGame = MakeArrayDin();
        int i;
        for(i=0; i<5; i++){
            MakeWord(&((*TabGame).A[i]));
            if(i==0){
                char p[20] = "RNG";
                CopyStringtoWord(&((*TabGame).A[i]),p);
            }
            else if(i==1){
                char p[20] = "LUNCH SLOW";
                CopyStringtoWord(&((*TabGame).A[i]),p);
            }
            else if(i==2){
                char p[20] = "DINOSAUR IN EARTH";
                CopyStringtoWord(&((*TabGame).A[i]),p);
            }
            else if(i==3){
                char p[20] = "RISEWOMAN";
                CopyStringtoWord(&((*TabGame).A[i]),p);
            }
            else{
                char p[20] = "EIFFEL TOWER";
                CopyStringtoWord(&((*TabGame).A[i]),p);
            }
        }
    }
}
/*
    I.S : Sembarang
    F.S : Jika start false maka TabGame diisikan game dengan configurasi awal, dan boolean start menjadi true.
        boolean start merupakan penanda bahwa BNMO telah dijalankan.
        Jika start true maka, tampilkan bahwa BNMO telah berjalan.
*/