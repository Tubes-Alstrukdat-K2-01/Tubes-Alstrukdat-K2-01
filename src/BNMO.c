/*
    file ini adalah drive main program dari program BNMO
*/

#include "fungsi/creategame/creategame.h"
#include "fungsi/deletegame/deletegame.h"
#include "fungsi/help/help.h"
#include "fungsi/listgame/listgame.h"
#include "fungsi/load/load.h"
#include "fungsi/playgame/playgame.h"
#include "fungsi/queuegame/queuegame.h"
#include "fungsi/quit/quit.h"
#include "fungsi/save/save.h"
#include "fungsi/skipgame/skipgame.h"
#include "fungsi/start/start.h"
#include "ADT/queue/queuediner.h"

int main(){
    ArrayDin TabGame = MakeArrayDin();
    boolean start = false, running = true;
    Queue QGame;
    CreateQueue(&QGame);
    HELP(start);
    printf("\n");
    while(running){
        Kata command;
        printf("ENTER COMMAND: ");
        STARTWORD();
        MakeKata(&command);
        CopyWordtoKata(&command,currentWord);
        if(IsKataEqual(command,StringtoKata("START"))){
            ADVWORD();
            if(isEndWord()){
                STARTPROGRAM(&TabGame,&start);
            }
            else{
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                while(!isEndWord()){
                    ADVWORD();
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("LOAD"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata filename; MakeKata(&filename);
                CopyWordtoKata(&filename,currentWord);
                ADVWORD();
                if(isEndWord()){
                    LOAD(&TabGame, &start, filename.Tab);
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    while(!isEndWord()){
                        ADVWORD();
                    }
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("SAVE"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata filename; MakeKata(&filename);
                CopyWordtoKata(&filename,currentWord);
                ADVWORD();
                if(isEndWord()){
                    SAVE(TabGame,"testing.txt");
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    while(!isEndWord()){
                        ADVWORD();
                    }
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("CREATE"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata command2; MakeKata(&command2);
                CopyWordtoKata(&command2, currentWord);
                ADVWORD();
                if(isEndWord()){
                    if(IsKataEqual(command2,StringtoKata("GAME"))){
                        CREATEGAME(&TabGame);
                    }
                    else{
                        printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    }
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("LIST"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata command2; MakeKata(&command2);
                CopyWordtoKata(&command2,currentWord);
                ADVWORD();
                if(isEndWord()){
                    if(IsKataEqual(command2,StringtoKata("GAME"))){
                        LISTGAME(TabGame);
                    }
                    else{
                        printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    }
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("DELETE"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata command2; MakeKata(&command2);
                CopyWordtoKata(&command2,currentWord);
                ADVWORD();
                if(isEndWord()){
                    if(IsKataEqual(command2,StringtoKata("GAME"))){
                        DELETEGAME(&TabGame);
                    }
                    else{
                        printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    }
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("QUEUE"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata command2; MakeKata(&command2);
                CopyWordtoKata(&command2,currentWord);
                ADVWORD();
                if(isEndWord()){
                    if(IsKataEqual(command2,StringtoKata("GAME"))){
                        menuQueueGame(&QGame, TabGame);
                    }
                    else{
                        printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    }
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("PLAY"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                Kata command2; MakeKata(&command2);
                CopyWordtoKata(&command2,currentWord);
                ADVWORD();
                if(isEndWord()){
                    if(IsKataEqual(command2,StringtoKata("GAME"))){
                        menuPlayGame(&QGame);
                    }
                    else{
                        printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    }
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("SKIPGAME"))){
            ADVWORD();
            if(isEndWord()){
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            }
            else{
                int skip, i;
                boolean integer = true;
                for(i=0; i<currentWord.Length; i++){
                    if(currentWord.TabWord[i] >= '0' && currentWord.TabWord[i] <= '9'){
                        skip *= 10;
                        skip += (int)(currentWord.TabWord[i]-48);
                    }
                    else{
                        integer = false;   
                    }
                }
                ADVWORD();
                if(isEndWord() && integer){
                    menuSkipGame(&QGame, skip);
                }
                else{
                    printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                    while(!isEndWord()){
                        ADVWORD();
                    }
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("QUIT"))){
            ADVWORD();
            if(isEndWord()){
                QUIT(&running);
            }
            else{
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                while(!isEndWord()){
                    ADVWORD();
                }
            }
        }
        else if(IsKataEqual(command,StringtoKata("HELP"))){
            ADVWORD();
            if(isEndWord()){
                HELP(start);
            }
            else{
                printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
                while(!isEndWord()){
                    ADVWORD();
                }
            }
        }
        else{
            printf("\nCommand tidak dikenali, silahkan masukkan command yang valid.\n");
            while(!isEndWord()){
                ADVWORD();
            }
        }
        while(!isEndWord()){
            ADVWORD();
        }
        printf("\n");
    }
}