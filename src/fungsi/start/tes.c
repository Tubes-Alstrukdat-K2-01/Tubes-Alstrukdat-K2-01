#include "start.h"
#include "../listgame/listgame.h"
#include <stdio.h>
#include "../creategame/creategame.h"
#include "../deletegame/deletegame.h"

int main(){
    ArrayDin TabGame;
    boolean start = false;
    STARTPROGRAM(&TabGame,&start);
    CREATEGAME(&TabGame);
    CREATEGAME(&TabGame);
    DELETEGAME(&TabGame);
    LISTGAME(TabGame);
    return 0;
}