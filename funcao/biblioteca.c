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
    if(a > b){
        return b;
    }
    else{
        menor = a;
    }
    return menor;
}

int menor_3n(int a, int b, int c){
    return menor_2n(menor_2n(a,b),c);
}


int verificar_numero_primo(int n){
    if(n < 2){
        return 0;
    }

    if(n % 2 == 0 && n != 2){
        return 0;
    }

    for(int i = 3; i <n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }
}