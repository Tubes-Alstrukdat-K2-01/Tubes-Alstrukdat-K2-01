#include "save.h"
#include <stdio.h>

int main(){
    FILE *file;
    int n = 54;
    char *s = IntToString(n);
    printf("%s",s);
    file = fopen("cek.txt","w");
    fputs(s,file);
    fclose(file);
    return 0;
}