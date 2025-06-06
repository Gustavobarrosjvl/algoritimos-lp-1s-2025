#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto{
    float x, y;
} Ponto;

int main(int argc, char *argv[]){
    if (argc != 5){
        printf("Xa:%s, Ya:%s, Xb:%s, Yb:%s\n", argv[1], argv[2], argv[3], argv[4]);
        return 1;
    }

    Ponto a = {atof(argv[1]), atof(argv[2])};
    Ponto b = {atof(argv[3]), atof(argv[4])};

    float Dx = b.x - a.x;
    float Dy = b.y - a.y;
    float distancia = sqrt(Dx * Dx + Dy * Dy);

    printf("Distancia AB: %.2f\n", distancia);
    return 0;
}