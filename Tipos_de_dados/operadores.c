#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float n1, n2;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);

    printf("Digite o valor de n2: ");
    scanf("%f", &n2);

    // Adição
    
    float soma = n1 + n2;
    printf("O resultado da soma eh: %.2f + %.2f = %.2f\n ", n1, n2, soma);

    // Subtração

    float diferenca = n1 - n2;
    printf("O resultado da diferenca eh: %.2f - %.2f = %.2f\n ", n1, n2, diferenca);

    // Multiplicação

    float produto = n1 * n2;
    printf("O resultado do produto eh: %.2f * %.2f = %.2f\n ", n1, n2, produto);

    // Divisão

    float quociente = n1 / n2;
    printf("O quociente eh: %.2f / %.2f = %.2f\n ", n1, n2, quociente);

    // Potenciação

    float resultado_potencia = powf (n1,n2);
    printf("O resultado da potencia eh: %.2f^%.2f = %.2f\n ", n1, n2, resultado_potencia);

    // Radiciação

    float raiz_quadrada = sqrtf(n1);
    printf("O resultado da raiz quadrada eh: %.2f^1/2 = %.2f\n ", n1, raiz_quadrada);

    // Resto da Divisão

    int resto = (int) n1 % (int) n2;
    printf("O resto da divisao eh: %.0f %% %.0f = %d\n ", n1, n2, resto);

    // Quociente da Divisão

    float quociente_inteiro = n1 / (int) n2;
    printf("O quociente da divisao eh: %.2f // %.2f = %d\n ", n1, n2, quociente_inteiro);

    // Incremento

    n1 ++;
    printf("O incremento eh: %.2f++ = %2.f\n ", n1-1, n1);

    // Decremento

    n1 --;
    printf("O incremento eh: %.2f-- = %2.f\n ", n1+1, n1);

    return 0;
}