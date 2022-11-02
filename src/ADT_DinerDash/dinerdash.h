#ifndef __DINER_DASH__
#define __DINER_DASH_

#include "queue.h"

boolean gameover(Queue q, int pelayanan);
/*
    I.S : q dan pelanggaran sembarang
    F.S : True jika panjang antrian queue lebih dari 7 atau pelayanan mencapai 15
          False jika belum termasuk katergori di atas
*/

void displayPesanan(Queue q);
/*
    I.S : q sembarang
    F.S : Menampilkan Pesanan yang terdiri dari Makanan, Durasi, Ketahanan, dan Harga
*/

void displayMemasak(Queue q);
/*
    I.S : q sembarang
    F.S : Menampilkan Daftar Pesanan yang sedang dimasak yang terdiri dari Makanan dan Durasi
*/

void displayMemasak(Queue q);
/*
    I.S : q sembarang
    F.S : Menampilkan Daftar Masakan yang sudah bisa disajikan yang sedang dimasak yang terdiri dari Makanan dan Ketahanan
*/
void cook(Queue qpesan, Queue *qmasak, int makanan);
/*
    I.S : Input bebas
    F.S : Memasukkan makanan kedalam qmasak
*/

void serve(Queue *qpesan, Queue *qmasak, int makanan, int *pelayanan, int *saldo);
/*
    I.S : Input bebas
    F.S : Jika makanan adalah head qpesan maka makanan akan dihapus dari qmasak dan pelayanan diincrement 1
          Jika tidak maka output "makanan" belum dapat disajikan karena "head qpesan" belum selesai
*/

void turn(Queue *q);
/*
    I.S : q sembarang
    F.S : Melakukan decrement pada durasi yang tidak 0 dan melakukan decrement pada ketahanan jika durasi == 0
*/

void dinerdash();

#endif // !__DINER_DASH__