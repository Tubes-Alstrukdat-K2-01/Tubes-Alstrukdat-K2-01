#include "load.h"

void LOAD(ArrayDin *TabGame, boolean *start, char *filename){
    if(*start){
        printf("Proses LOAD gagal karena BNMO telah dijalankan");
    }
    else{
        MakeArrayDin(TabGame);
        FILE *pita;
        if((pita = fopen(filename,"r")) == NULL){
            
        }     
    }
}
/*
   I.S : Sembarang
   F.S : Jika start false maka write semua value yang ada di filename.txt kedalam TabGame sesuai dengan format konfigurasi
        Jika start true maka menampilkan LOAD gagal karena BNMO sudah dijalankan
*/