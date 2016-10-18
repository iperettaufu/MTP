#include <stdio.h>

int main() {
    char nomearq[256];
    printf("Nome do arquivo: ");
    scanf("%s", nomearq);
    gravaArq(nomearq);
    return 0;
}

void gravaArq(char * filename) {
    FILE * arquivo;
    arquivo = fopen(filename, "w");
    fprintf(arquivo, "Funcionou!\n");
    fclose(arquivo);
}
