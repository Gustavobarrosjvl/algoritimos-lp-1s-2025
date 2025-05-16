#include <stdio.h>

int maior_2n(int a, int b){
    int maior;
    if(a > b){
        return a;
    }
    else{
        maior = b;
    }
    return maior;
}

int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a,b),c);
}

int menor_2n(int a, int b){
    int menor;
    if(a < b){
        return a;
    }
    else{
        menor = b;
    }
    return menor;
}

int menor_3n(int a, int b, int c){
    return menor_2n(menor_2n(a,b), c);
}