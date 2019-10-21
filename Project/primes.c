#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int prime;
char m [10];

void checkPrimes(int number){

    if (number % prime != 0){

        char numberc [10];
        sprintf(numberc, "%d" ,number);
        write(1,numberc,sizeof(numberc));

    }
}


int main(int argc, char **argv){

    char primec [10];

    sprintf(m,"-1");
    read(0,primec,sizeof(primec));
    prime = atoi(primec);

    if (prime == -1){
        write(1,m,sizeof(m));
        return 0;
    }

    fprintf(stderr, "%s \n", primec);

    while(1){

        char numberc [10];
        read(0,numberc,sizeof(numberc));

        int num = atoi(numberc);
        if (num == -1){
            write(1,m,sizeof(m));
            return 0;
        }
        else{
            checkPrimes(num);
        }


    }

    return 0;
}