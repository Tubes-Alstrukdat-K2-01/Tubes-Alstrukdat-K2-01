#include "creategame.h"

void CREATEGAME (ArrayDin *arrayGames){
    int i = 0;
    char *name;
    boolean found = false;

    printf("Masukkan nama game yang akan ditambahkan: "); 
    scanf("%[^\n]", &name);
    
    // Megecek apakah nama game sudah terdaftar atau belum
    for (i; i < (*arrayGames).Neff; i++){
        if ((*arrayGames).A[i] == name){
            found = true;
        }
    }
    if (found) // Kondisi ketika game belum terdaftar
    {
        InsertLast(arrayGames, name);
        printf("Game berhasil ditambahkan");
    } 
    else // Kondisi ketika game telah terdaftar
    {
        printf("Game telah terdaftar");
    }
}