#include "creategame.h"
#include <stdio.h>
#include "../deletegame/deletegame.h"


static FILE *pita;
int main(){
    ArrayDin TabGame = MakeArrayDin();
    int i;
    for(i=0; i<7; i++){
        CREATEGAME(&TabGame);
    }
    // for(i=0; i<TabGame.Neff; i++){
    //     printf("%d. %s\n",i+1,TabGame.A[i].Tab);
    // }
    DELETEGAME(&TabGame);
    printf("\n");
    // for(i=0; i<TabGame.Neff; i++){
    //     printf("%d. %s\n",i+1,TabGame.A[i].Tab);
    // }
    return 0;
}