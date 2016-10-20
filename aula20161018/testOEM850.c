#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void winprintf(char * texto);

int main(){
    printf("Com PRINTF\n");
    printf("Aten��o: teste 1, 2, 3\n�������\n");
    printf("Com WINPRINTF\n");
    winprintf("Aten��o: teste 1, 2, 3\n�������\n");
    return 0;
}

void winprintf(char * texto) {
    char * aux;
    int i, len = 0;
    while(texto[len]) len++;
    aux = (char *) calloc(len + 1, sizeof(char));
    for(i = 0; i < len; i++) aux[i] = texto[i];
    aux[len] = '\0';
    CharToOem(aux,aux);
    printf("%s",aux);
    free(aux);
}
