#include "start.h"
#include "../listgame/listgame.h"
#include <stdio.h>
#include "../creategame/creategame.h"

int main(){
    ArrayDin TabGame;
    boolean start = false;
    START(&TabGame,&start);
    CREATEGAME(&TabGame);
    LISTGAME(TabGame);
    return 0;
}