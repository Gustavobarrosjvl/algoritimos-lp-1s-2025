#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float D, d, area;

    printf("Digite a medida da diagonal maior do losangulo: ");
    scanf("%f", &D);

    printf("Digite a medida da diagonal menor do losangulo: ");
    scanf("%f", &d);

    area = D * d /2;
    printf("A area do losangulo eh %.2f\n", area);

    return 0;
}