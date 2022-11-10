#include "load.h"

void LOAD(ArrayDin *TabGame, boolean *start, char *filename)
{
    if (*start)
    {
        printf("Proses LOAD gagal karena BNMO telah dijalankan.");
    }
<<<<<<< HEAD
    else{
        *start = true;
        MakeArrayDin(TabGame);
        FILE *pita;
        char *file = concat("../../../data/",filename);
        if((pita = fopen(filename,"r")) == NULL){
            printf("File Konfigurasi tidak ditemukan\n");
        }
        else{
            printf("Save file berhasil dibaca. BNMO berhasil dijalankan.\n");
=======
    else
    {
        MakeArrayDin(TabGame);
        FILE *pita;
        if ((pita = fopen(filename, "r")) == NULL)
        {
            printf("File Konfigurasi tidak ditemukan. ");
        }
        else
        {
>>>>>>> 4c73686ed9d7f136d0595c3ee5eb984e24b55808
            char data[255];
            fgets(data, 255, pita);
            int n = 0, i = 0;
            while (data[i] != '\0')
            {
                if (data[i] >= '0' && data[i] <= '9')
                {
                    n *= 10;
                    n += (int)(data[i] - 48);
                }
                i++;
            }
            for (i = 0; i < n; i++)
            {
                fgets(data, 255, pita);
                Kata w;
                MakeWord(&w);
                CopyStringtoWord(&w, data);
                InsertAt(TabGame, w, i);
            }
        }
    }
}
/*
I.S : Sembarang
F.S : Jika start false maka write semua value yang ada di filename.txt kedalam TabGame sesuai dengan format konfigurasi
        Jika start true maka menampilkan LOAD gagal karena BNMO sudah dijalankan
*/