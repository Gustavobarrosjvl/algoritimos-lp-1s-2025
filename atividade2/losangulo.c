#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float diagonalmaior, diagonalmenor, area;

    printf("Digite a medida da diagonal maior do losangulo: ");
    scanf("%f", &diagonalmaior);

    printf("Digite a medida da diagonal menor do losangulo: ");
    scanf("%f", &diagonalmenor);

    area = diagonalmaior * diagonalmenor /2;
    printf("A area do losangulo eh %.2f\n", area);

    return 0;
}