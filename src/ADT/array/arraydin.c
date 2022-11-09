#include "arraydin.h"
#include <stdlib.h>

/**
 * Konstruktor
 * I.S. sembarang
 * F.S. Terbentuk ArrayDin kosong dengan ukuran InitialSize
 */
ArrayDin MakeArrayDin(){
    ArrayDin p;
    p.A = (Word*) malloc (InitialSize*sizeof(Word));
    p.Capacity = InitialSize;
    p.Neff = 0;
    return p;
}

/**
 * Destruktor
 * I.S. ArrayDin terdefinisi
 * F.S. array->A terdealokasi
 */
void DeallocateArrayDin(ArrayDin *array){
    free((*array).A);
    (*array).Capacity = 0;
    (*array).Neff = 0;
}

/**
 * Fungsi untuk mengetahui apakah suatu array kosong.
 * Prekondisi: array terdefinisi
 */
boolean IsEmpty(ArrayDin array){
    return (array.Neff == 0);
}

/**
 * Fungsi untuk mendapatkan banyaknya elemen efektif array, 0 jika tabel kosong.
 * Prekondisi: array terdefinisi
 */
int Length(ArrayDin array){
    return array.Neff;
}

/**
 * Mengembalikan elemen array L yang ke-I (indeks lojik).
 * Prekondisi: array tidak kosong, i di antara 0..Length(array).
 */
Word Get(ArrayDin array, IdxType i){
    return array.A[i];
}

/**
 * Fungsi untuk mendapatkan kapasitas yang tersedia.
 * Prekondisi: array terdefinisi
 */
int GetCapacity(ArrayDin array){
    return array.Capacity;
}

/**
 * Fungsi untuk menambahkan elemen baru di index ke-i
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void InsertAt(ArrayDin *array, Word el, IdxType i){
    if ((*array).Neff == (*array).Capacity){
        Word *list = (Word*) malloc (((*array).Capacity*2)*sizeof(Word));
        IdxType p=0;
        for (p; p<(*array).Neff; p++){
            list[p] = Get(*array , p);
        }
        free((*array).A);
        (*array).A = list;
        (*array).Capacity *= 2;
    }
    IdxType j=(*array).Neff;
    for (j;j>i;j--){
        CopyWord(&(*array).A[j-1] , &(*array).A[j]);
    }
    (*array).A[i]=el;
    (*array).Neff+=1;
}

/**
 * Fungsi untuk menghapus elemen di index ke-i ArrayDin
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */

void DeleteAt(ArrayDin *array, IdxType i){
    IdxType j = i;
    while (j<(*array).Neff-1){
        CopyWord(&(*array).A[j+1] , &(*array).A[j]);
        j++;
    }
    array->Neff--;
}

void CopyWord(Word *Win, Word *Wout){
    (*Wout).Length = (*Win).Length;
    int i;
    for(i=0; (*Win).Length; i++){
        (*Wout).Tab[i] = (*Win).Tab[i];
    }
}

void MakeWord(Word *W){
    (*W).Length = 0;
}

void CopyStringtoWord(Word *W, char *s){
    MakeWord(W);
    int i=0;
    while(s[i] != '\0'){
        (*W).Tab[i] = s[i];
        (*W).Length++; 
        i++;
    }
}