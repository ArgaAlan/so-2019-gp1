#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv){
    int time;

    if(argc<2){
        printf(2,"Time to sleep\n");
        exit();
    }

    time = atoi(argv[1]);

    if(time>0){
        sleep(time*100);
    } else {
        printf(2, "Bad input %s\n", argv[1]);
    }

    exit();
}

