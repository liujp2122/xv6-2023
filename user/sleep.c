#include "user/user.h"
#include "kernel/types.h"

int main(int argc, char *argv[]){
    if(argc < 2){
        fprintf(2, "sleep: missing operand \nTry 'sleep --help' for more information.\n");
        exit(1);
    }

    uint time = atoi(argv[1]);
    sleep(time);
    exit(0);
}