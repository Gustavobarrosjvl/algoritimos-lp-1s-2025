#include <stdio.h>

int main(int argc, char* argv[]){
    int idade;
    float altura;
    double peso;
    printf ("digite a idade: ");
    scanf("%d", &idade);
     printf ("digite a altura: ");
    scanf("%f", &altura);
     printf ("digite o peso: ");
    scanf("%f", &peso);
    printf ("A idade eh %d\n", idade);
    printf ("A altura eh %f\nO peso eh %.2f", altura, peso);

    float dobro_peso = peso * 2.0;
    printf("O dobro do peso eh %.2f", dobro_peso);
    
    return 0;
}