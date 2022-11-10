#ifndef __WORD__
#define __WORD__

#include "../boolean.h"
<<<<<<< HEAD
#include "../mesinkata/mesinkata.h"
=======

>>>>>>> c396dc0dff86a720242e06fcbc3a8b6a5b085487
typedef struct {
    char Tab[50];
    int Length;
} Kata;
/*
  Fungsi untuk menyalin semua yang ada di Win ke Wout
*/
void CopyKata(Kata *Win, Kata *Wout);

/*
  Fungsi untuk membuat MakeKata dengan Kata kosong
  Kata Kosong ditandai dengan Kata.Length = 0;
*/
void MakeKata(Kata *W);

/*
  I.S : W kosong dan s berisi
  Fungsi untuk mengkopi semua yang ada di string ke Kata
*/
void CopyStringtoKata(Kata *W, char *s);

void CopyWordtoKata(Kata *K, Word W);

void CopyKata(Kata *Win, Kata *Wout);

Kata StringtoKata(char *s);

boolean IsKataEqual(Kata W1, Kata W2);

int length(char *string);

char* concat(char *s1, char *s2);

#endif // !__WORD__