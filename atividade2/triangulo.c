#include <stdio.h>
#include <math.h>

//;; ::

int main(int argc, char* argv[]){

    float base, altura, area;

    printf("Digite a medida da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a medida da altura do triangulo: ");
    scanf("%f", &altura);

    area = base * altura /2;
    printf("A area do triangulo eh %.2f\n", area);

    return 0;
}