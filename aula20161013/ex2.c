#include <stdio.h>
#include <stdlib.h>
#define X1 8
int primo(int numero);
int main() {
    int i, numero = X1;
    for(i = 2; i <= numero/2; i++) {
        if(primo(i) && primo(numero-i))
            printf("Soma: %d + %d\n", i, numero-i);
    }
    return 0;
}
int primo(int numero) {
    int i, verifica = 1;
    for(i = 2; i <= numero/2; i++)
        if(numero%i == 0) {
            verifica = 0;
            break;
        }
    return verifica;
}
