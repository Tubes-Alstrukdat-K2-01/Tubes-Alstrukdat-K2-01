#include "start.h"
#include <stdio.h>

void START(ArrayDin *TabGame, boolean *start){
    if(*start){
        printf("Proses Start tidak berhasil dilakukan karena BNMO telah dijalankan!\n");
    }
    else{
        *start = true;
        *TabGame = MakeArrayDin();
        int i;
        for(i=0; i<5; i++){
            Kata k;
            MakeKata(&k);
            if(i==0){
                char p[20] = "RNG";
                CopyStringtoKata(&k,p);
            }
            else if(i==1){
                char p[20] = "LUNCH SLOW";
                CopyStringtoKata(&k,p);
            }
            else if(i==2){
                char p[20] = "DINOSAUR IN EARTH";
                CopyStringtoKata(&k,p);
            }
            else if(i==3){
                char p[20] = "RISEWOMAN";
                CopyStringtoKata(&k,p);
            }
            else{
                char p[20] = "EIFFEL TOWER";
                CopyStringtoKata(&k,p);
            }
            InsertLast(TabGame,k);
        }
    }
}
/*
    I.S : Sembarang
    F.S : Jika start false maka TabGame diisikan game dengan configurasi awal, dan boolean start menjadi true.
        boolean start merupakan penanda bahwa BNMO telah dijalankan.
        Jika start true maka, tampilkan bahwa BNMO telah berjalan.
*/