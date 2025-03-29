#include <stdio.h>
#include <math.h>

//;; ::

int main(int argc, char* argv[]){

    float basemaior, basemenor, altura, area;

    printf("Digite a medida da base maior do trapezio: ");
    scanf("%f", &basemaior);

    printf("Digite a medida da base menor do trapezio: ");
    scanf("%f", &basemenor);

    printf("Digite a medida da altura do trapezio: ");
    scanf("%f", &altura);

    area = (basemaior + basemenor) * altura /2;
    printf("A area do trapezio eh %.2f\n", area);

    return 0;
}