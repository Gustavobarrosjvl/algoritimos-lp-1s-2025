#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float altura;
    float peso;
    float imc;
    printf ("digite a altura: ");
    scanf("%f", &altura);
    printf ("digite o peso: ");
    scanf("%f", &peso);

    imc = peso /(altura * altura);

    printf("O sei IMC eh %.2f\n", imc);

    return 0;
}