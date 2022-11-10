#include "save.h"
#include "../start/start.h"
#include <stdio.h>

int main(){
    ArrayDin TabGame;
    boolean start = false;
    START(&TabGame,&start);
    SAVE(TabGame,"tes.txt");
    return 0;
}