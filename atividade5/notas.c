#include <stdio.h>

int main(int argc,char* argv[]){
int qtdalunos, n;
float soma, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &qtdalunos);

    float notas[qtdalunos];
    printf("Digite a nota dos alunos (Entre 0.00 e 10.0): \n");   
    for(n = 1; n <= qtdalunos; n++){ 
    scanf("%f", &notas[n]);
    }

    //MEDIA
    for(n = 1; n <= qtdalunos; n++){
        soma += notas[n];
    }

        media = ( soma / qtdalunos);

    //Maior e Menor nota

    printf("RESULTADOS");
    printf("A media geral da turma eh: %2.f\n", media);

    return 0;
}