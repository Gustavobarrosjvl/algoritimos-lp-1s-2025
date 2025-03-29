#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float raio, area;
    const float Pi = (3.14);

    printf("Digite a medida do raio do circulo: ");
    scanf("%f", &raio);

    area = Pi * powf(raio,2);
    printf("A area do circulo eh %.2f\n", area);

    return 0;
}