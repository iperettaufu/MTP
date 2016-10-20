#include <stdio.h>
#include <stdlib.h>
#if (defined __WIN32__ || defined __WIN64__)
	#include <windows.h>
	#undefine printf
	#define printf winprintf
#endif

/* O PROGRAMA EST� COM ERRO */

char * winprintf(char * texto);

int main(){
    printf("::: Com PRINTF :::\n");
    printf("Aten��o: teste 1, 2, 3\n�������\n");
    printf("::: Com WINPRINTF :::\n");
    printf("Aten��o: teste %d, 2, 3\n�������\n", 1);
    return 0;
}

char * winprintf(char * texto) {
    char * aux;
    int i, len = 0;
    while(texto[len]) len++;
    aux = (char *) calloc(len + 1, sizeof(char));
    for(i = 0; i <= len; i++) aux[i] = texto[i];
    CharToOem(aux, aux);
    fprintf(stdout, "%s", aux);
    free(aux);
}
