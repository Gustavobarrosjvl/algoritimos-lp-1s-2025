#include <stdio.h>

int main (int argc, char* argv[]){
    int numero, i, primo = 1;

    printf("\nVERIFICADOR DE NUMERO PRIMO\n");
    printf("Digite o numero que deseja verificar: ");
    scanf("%d", &numero);

    if(numero <= 1){
        primo = 0;
    } else{
        for(i = 2; i * i <= numero; i++){
            if(numero %i == 0){
                primo = 0;
                break;
            }
        }
    }

    if (primo){
        printf("%d eh um numero primo.\n", numero);
    } else{
        if(numero <= 1){
            printf("Nao eh um numero primo!\n");
        }else{
         printf("Nao eh um numero primo");
        }
    }

    return 0;
}