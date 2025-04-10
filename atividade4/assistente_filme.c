#include <stdio.h>

int main(int argc, char* argv[]){
    
    int opcao;

    do{
        printf("Escolha o tipo de filme que deseja assistir: \n");
        printf("1 - LEVE \n");
        printf("2 - INTENSO \n");

        scanf("%d", &opcao);

        if (opcao == 1){

        printf("LEVE \n");
        printf("Escolha o genero do seu filme entre: \n");
        printf("1 - Comedia\n");
        printf("2 - Animacao\n");
        scanf("%d",&opcao);

            if (opcao == 1){
            printf("Assistir ao filme 'As Branquelas'\n");
            }

            if (opcao == 2){
            printf ("Assistir ao filme 'Toy Story'\n");
            }

        }

        else if (opcao == 2){

        printf("INTENSO \n");
        printf("Escolha o genero do seu filme entre: \n");
        printf("1 - Terror\n");
        printf("2 - Acao\n");
        scanf("%d",&opcao);

            if (opcao == 1){
            printf("TERROR \n");
            printf("Escolha entre terror Psicologico ou Sobrenatural: \n");
            printf("1 - Piscicologico\n");
            printf("2 - Sobrenatural\n");
            scanf("%d",&opcao);

                if (opcao == 1){
                printf("Assistir ao filme 'CORRA!'\n");
                }

                if (opcao == 2){
                printf ("Assistir ao filme 'Invocacao do Mal'\n");
                }
            }

            if (opcao == 2){
            printf("ACAO \n");
            printf("Escolha entre Super-Herois ou Aventura Realista: \n");
            printf("1 - Super-Herois \n");
            printf("2 - Aventura Realista \n");
            scanf("%d",&opcao);

                if (opcao == 1){
                printf("Assistir ao filme 'Vingadores Ultimato'\n");
                }

                if (opcao == 2){
                printf ("Assistir ao filme 'Mad Max: Estrada Funa'\n");
                }
            }
        }
        printf("Deseja escolher novo fime?\n");
        printf("1 - SIM\n 2 - NAO\n");
        scanf("%d",&opcao);
    } while (opcao == 1);
    
return 0;

}