#include <stdio.h>

#define MAX 225

//GLOBAL
int y = 1;

void incrementaX(int* x){
    while (*x < 5){
        y++;
        *x = 11;
    }
}

int main(int argc, char* argv[]){

    incrementaX(&z);

    printf("y = %d\n", y);
    printf("z = %d", z);
    
    return 0;
}