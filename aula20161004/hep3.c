#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char * texto = malloc(sizeof(char));
    texto[0] = '\0';
    printf("Entre com um texto:\n");
    recebeTexto(texto);
    printf("\n%s\n", texto);
    return 0;
}

void recebeTexto(char * texto) {
    int c, tamanho = strlen(texto);
    char * aux;
    printf("%p",texto);
    do {
        c = getchar();
        if(c != '#') {
            texto[tamanho] = c;
            tamanho++;
            aux = realloc(texto,(tamanho+1)*sizeof(char));
            strcpy(aux,texto);
            aux[tamanho] = '\0';
            texto = aux;
        }
    } while (c != '#');
    printf("%p",texto);
}
