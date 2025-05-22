#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(struct Aluno a){
    printf("\nNome: %sNota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){
    int n = 5;
    Aluno alunos[n];

    for(int i = 0; i < n; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, TAM_NOME, stdin);
        printf("Digite a nota do aluno (Entre 0.00 e 10.00): ", i + 1);
        scanf("%f", &alunos[i].nota);
        getchar();

        //imprimir_aluno(alunos[i]);
    }
    float maior = notas[0];
    float menor = notas[0];

    for(i = 1; i < n; i++){
        if(notas[i] > maior) {
            maior = notas[n];
        }
        if(notas[i] < menor) {
            menor = notas[i];
        }
    }
    printf("A maior nota: %.2f\n", maior);
    printf("A menor nota: %.2f\n", menor);

    return 0;
}