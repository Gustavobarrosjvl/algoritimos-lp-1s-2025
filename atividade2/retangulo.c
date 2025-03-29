#include <stdio.h>
#include <math.h>

//;; ::

int main(int argc, char* argv[]){

    float base, altura, area;

    printf("Digite a medida da base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a medida da altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("A area do retangulo eh %.2f\n", area);

    return 0;
}