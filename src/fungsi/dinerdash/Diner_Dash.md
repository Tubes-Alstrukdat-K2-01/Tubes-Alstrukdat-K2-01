Petunjuk Menjalankan Diner Dash:

cara compile : gcc dinerdash.c ../queue/queue.c driver.c ../mesinkarakter/mesinkarakter.c ../mesinkata/mesinkata.c -o [program]
menjalankan program : ./[program]
[] bisa diganti dengan apa saja

Diner Dash merupakan permainan mengantar makanan namun terurut berdasarkan prioritasnya.
Ada 2 Command dalam permainan ini yaitu 'COOK' dan 'SERVE'
selain command pemain juga diminta untuk memberikan nomor pesanan dengan format: M[nomor_pesanan] ; nomor_pesanan 0..

Ada beberapa aturan dalam permainan :
1. Jumlah antrian maksimal adalah 7, jika lebih dari 7 maka permainan selesai.
2. Jumlah pesanan yang telah diselesaikan maksimal adalah 15, jika sudah 15 maka permainan akan selesai.
3. Setiap pemain hanya dapat memasak 5 makanan dalam sekali waktu, jika lebih dari 5 maka command adalah invalid
4. Pemain bebas memasakan makanan yang ada diantrian
5. Pemain hanya dapat menyajikan makanan untuk antrian terdepan
6. Jika ada kesalahan dalam cook, serve, dan command maka tidak akan dianggap satu putaran (turn)
