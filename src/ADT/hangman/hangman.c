#include "hangman.h"
#include "../word/word.h"
#include "../array/arraydin.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char toLower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    else{
        return c;
    }
}
ArrayDin initWordlist(){
    ArrayDin A = MakeArrayDin();
    int i;

    InsertAt(&A, StringtoWord("Lapar"),0);
    InsertAt(&A, StringtoWord("Kenyang"),1);
    InsertAt(&A, StringtoWord("Makan"),2);
    return A;
}
ArrayDin initDescList(){
    ArrayDin A = MakeArrayDin();
    int i;
    InsertAt(&A, StringtoWord("berasa ingin makan (karena perut kosong)"),0);
    InsertAt(&A, StringtoWord("sudah puas makan"),1);
    InsertAt(&A, StringtoWord("bikin kenyang"),2);
    return A;
}

void hangman(){
    srand(time(0));
    ArrayDin wordlist = initWordlist();
    ArrayDin descList = initDescList();

    int i;
    int random = rand() % wordlist.Neff;
    // printf("%d\n", random);
    Word word = wordlist.A[random];
    Word desc = descList.A[random];
    int wordLength = word.Length;
    int wrongGuess = 0;
    int correctGuess = 0;
    char guess;
    char wordGuess[50];
    for(i=0; i<wordLength; i++){
        wordGuess[i] = '_';
    }
    wordGuess[wordLength] = '\0';
    printf("Selamat datang di game Hangman!\n");
    printf("Game ini akan mengacak sebuah kata dan memberikan deskripsi dari kata tersebut.\n");
    printf("Kamu harus menebak kata tersebut dengan menebak satu huruf per satu huruf.\n");
    printf("Jika salah menebak, kamu akan diberikan kesempatan untuk menebak lagi.\n");
    printf("Jika salah menebak 6 kali, kamu akan kalah.\n");
    printf("Jika berhasil menebak, kamu akan menang.\n");
    printf("Selamat bermain!\n");
    printf("Deskripsi: %s\n", desc.Tab);
    printf("Kata: %s\n", wordGuess);
    while(wrongGuess < 6 && correctGuess < wordLength){
        printf("Masukkan huruf: ");
        scanf(" %c", &guess);
        boolean found = false;
        for(i=0; i<wordLength; i++){
            if(toLower(word.Tab[i]) == guess){
                wordGuess[i] = word.Tab[i];
                correctGuess++;
                found = true;
            }
        }
        if(correctGuess == wordLength){
            printf("Selamat, kamu berhasil menebak kata tersebut!\n");
            printf("Kata: %s\n", wordGuess);
            break;
        }
        if(!found){
            wrongGuess++;
            printf("Kamu salah menebak!\n");
            printf("Kesempatan salah menebak: %d\n", 6-wrongGuess);
        }
        printf("Kata: %s\n", wordGuess);
    }
    if(wrongGuess == 6){
        printf("Kamu kalah!\n");
        printf("Kata yang harus ditebak: %s\n", word.Tab);
    }

}
int main(){
    hangman();
    return 0;
}