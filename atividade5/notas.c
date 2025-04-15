#include <stdio.h>

int main(int argc,char* argv[]){
    int qtdalunos, n, k, aprovados = 0;
    float soma = 0.0, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qtdalunos);

    float notas[qtdalunos];

    for(n = 0; n < qtdalunos; n++){
        do{
            printf("Digite a nota do aluno %d (Entre 0.00 e 10.0): ", n + 1);   
            scanf("%f", &notas[n]);

        } while (notas[n] < 0.0 || notas[n] > 10.0);

        soma += notas[n];

        //APROVADOS
        if (notas[n] >= 6.0){
            aprovados++;
        }
    }

    //Maior e Menor nota
    float maior = notas[0];
    float menor = notas[0];

    for(n = 1; n < qtdalunos; n++){
        if(notas[n] > maior) {
            maior = notas[n];
        }
        if(notas[n] < menor) {
            menor = notas[n];
        }
    }

    media = soma / qtdalunos;

    //POSIÇÃO
    printf("Digite a posicao do aluno que seseja ver a nota (0 a %d): ", qtdalunos - 1);
    scanf("%d",&k);
    printf("Nota do aluno na posicao %d: %.2f\n", k, notas[k]);


    printf("\n-----RESULTADOS-----\n");
    printf("A media geral da turma: %.2f\n", media);
    printf("A maior nota: %.2f\n", maior);
    printf("A menor nota: %.2f\n", menor);
    printf("A quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}