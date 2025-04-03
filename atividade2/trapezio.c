#include <stdio.h>
#include <math.h>

//;; ::

int main(int argc, char* argv[]){

    float B , b, A, area;

    printf("Digite a medida da base maior do trapezio: ");
    scanf("%f", &B);

    printf("Digite a medida da base menor do trapezio: ");
    scanf("%f", &b);

    printf("Digite a medida da altura do trapezio: ");
    scanf("%f", &A);

    area = (B + b) * A /2;
    printf("A area do trapezio eh %.2f\n", area);

    return 0;
}