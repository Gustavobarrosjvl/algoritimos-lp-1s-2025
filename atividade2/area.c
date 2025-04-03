#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    char opcao;
    float raio, area, D, d, lado, base, altura, B, b, A;
    const float Pi = (3.14);

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losangulo\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){

        case 'c':
            printf("Circulo\n");
            printf("Digite a medida do raio do circulo: ");
            scanf("%f", &raio);
            area = Pi * powf(raio,2);
            break;

        case 'l':
            printf("Losangulo\n");
            printf("Digite a medida da diagonal maior do losangulo: ");
            scanf("%f", &D);
            printf("Digite a medida da diagonal menor do losangulo: ");
            scanf("%f", &d);
            area = D * d /2;
            break;

        case 'q':
            printf("Quadrado\n");
            printf("Digite a medida do lado do quadrado: ");
            scanf("%f", &lado);
            float area = powf(lado,2);
            break;

        case 'r':
            printf("Retangulo\n");
            printf("Digite a medida da base do retangulo: ");
            scanf("%f", &base);
            printf("Digite a medida da altura do retangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            break;

        case 't':
            printf("Triangulo\n");
            printf("Digite a medida da base do triangulo: ");
            scanf("%f", &base);
            printf("Digite a medida da altura do triangulo: ");
            scanf("%f", &altura);
            area = base * altura /2;
            break;

        case 'z':
            printf("Trapezio\n");
            printf("Digite a medida da base maior do trapezio: ");
            scanf("%f", &B);
            printf("Digite a medida da base menor do trapezio: ");
            scanf("%f", &b);
            printf("Digite a medida da altura do trapezio: ");
            scanf("%f", &A);
            area = (B + b) * A /2;
            break;

        default:
            printf("Opcao invalida");

    }

    printf("area = %.2f\n", area);

    return 0;
}