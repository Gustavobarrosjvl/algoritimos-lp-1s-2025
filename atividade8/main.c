#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    int a, b;
} Ponto;

int main(int argc, char *argv[]){

    Ponto X, Y;
    float dXY;

    X.a = atoi(argv[1]);
    Y.a = atoi(argv[2]);
    X.b = atoi(argv[3]);
    Y.b = atoi(argv[4]);

    dXY = sqrt (pow(Y.a - X.a, 2) + pow(Y.b - Y.b, 2));
    printf("Distancia AB: %.2f\n", dXY);
    return 0;
}