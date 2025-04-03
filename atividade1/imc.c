#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float altura;
    float peso;
    float imc;
    printf ("digite a altura (Metros): ");
    scanf("%f", &altura);
    printf ("digite o peso (KG): ");
    scanf("%f", &peso);

    imc = peso /(altura * altura);

    printf("O sei IMC eh %.2f\n", imc);

    if(imc < 18.5){
        printf("Baixo peso\n");
    }

    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal\n");
    }

   if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso\n");
    }

    if(imc > 29.9 && imc <= 34.9){  
        printf("obesidade I\n");
    }

    if(imc > 34.9 && imc <= 39.9){  
        printf("obesidade II\n");
    }

    if(imc > 39.9){  
        printf("obesidade III\n");
    }

    return 0;
}