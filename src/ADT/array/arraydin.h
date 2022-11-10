#ifndef __ARRAY_DINAMIK__
#define __ARRAY_DINAMIK__




// Boolean
#include "../boolean.h"
#include "../word/word.h"

#define InitialSize 10
<<<<<<< HEAD
typedef struct {
    char Tab[50];
    int Length;
} Kata;
=======

>>>>>>> 3b0b826a7bb1b341a18d2c883f01faa6f72f2829
typedef int IdxType;
typedef struct {
    Kata *A;
    int Capacity;
    int Neff;
} ArrayDin;

/**
 * Konstruktor
 * I.S. sembarang
 * F.S. Terbentuk ArrayDin kosong dengan ukuran InitialSize
 */
ArrayDin MakeArrayDin();

/**
 * Destruktor
 * I.S. ArrayDin terdefinisi
 * F.S. array->A terdealokasi
 */
void DeallocateArrayDin(ArrayDin *array);

/**
 * Fungsi untuk mengetahui apakah suatu array kosong.
 * Prekondisi: array terdefinisi
 */
boolean IsEmpty(ArrayDin array);

/**
 * Fungsi untuk mendapatkan banyaknya elemen efektif array, 0 jika tabel kosong.
 * Prekondisi: array terdefinisi
 */
int Length(ArrayDin array);

/**
 * Mengembalikan elemen array L yang ke-I (indeks lojik).
 * Prekondisi: array tidak kosong, i di antara 0..Length(array).
 */
Kata Get(ArrayDin array, IdxType i);

/**
 * Fungsi untuk mendapatkan kapasitas yang tersedia.
 * Prekondisi: array terdefinisi
 */
int GetCapacity(ArrayDin array);

/**
 * Fungsi untuk menambahkan elemen baru di index ke-i
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void InsertAt(ArrayDin *array, Kata el, IdxType i);

/**
 * Fungsi untuk menghapus elemen di index ke-i ArrayDin
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void DeleteAt(ArrayDin *array, IdxType i);

/*
  Fungsi untuk menyalin semua yang ada di Win ke Wout
*/
<<<<<<< HEAD
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


/*
  Fungsi untuk menambahkan anggota TabGame dengan game sebagai element terakhir
*/
void InsertLast(ArrayDin *TabGame, Kata game);
=======
>>>>>>> 3b0b826a7bb1b341a18d2c883f01faa6f72f2829

#endif