#include <stdio.h>

/*
    MODOS DE ABERTURA DE ARQUIVO
    'r' -> para leitura
    'w' -> para criar/sobrescrever e escrever no arquivo
    'a' -> criar, se não existir, e adicionar ao final do arquivo
*/

int main(int argc, char* argv[]){

    FILE *sexta = fopen("C:\\Users\\gustavo.jbarros\\Documents\\sexta.txt","w");
    
    if(sexta == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
    }

    fprintf(sexta, "Hello, World!");

    fclose(sexta);

    return 0;
}