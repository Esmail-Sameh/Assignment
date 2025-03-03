#include <stdio.h>
#include <stdlib.h>
#define DEBUG "DEBUG"

int main(){

    #ifdef DEBUG
    printf(DEBUG,"\n");
    #endif
    return 0;
}
