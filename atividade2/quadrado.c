#include <stdio.h>
#include <math.h>

//;; ::

int main(int argc, char* argv[]){

    float lado;

    printf("Digite a medida do lado do quadrado: ");
    scanf("%f", &lado);

    float area = powf (lado,2);
    printf("A area do quadrado eh %.2f\n", area);

    return 0;
}