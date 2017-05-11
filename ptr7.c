#include <stdio.h>
#include <stdlib.h>
#define NCHAR 256
int main() {
    int opc, i;
    long long int numero;
    long long int * p;
    unsigned char * pc;
    char frase[NCHAR];
    printf("1 - Criptografar\n");
    printf("2 - Descriptografar\n");
    scanf("%d",&opc); getchar();
    if(opc == 1) {
        for(i = 0; i < NCHAR; i++)
            frase[i] = '\0';
        printf("Entre com uma frase:\n");
        fgets(frase,NCHAR,stdin);
        printf("Criptografando...\n");
        p = (long long int *) frase;
        for(i = 0; i < sizeof(frase)/sizeof(long long int); i++)
                if(p[i] != 0)
                    printf("%lld ", p[i]);
        return EXIT_SUCCESS;
    }
    if(opc == 2) {
        printf("Entre com os codigos, '0' para encerrar:\n");
        pc = (unsigned char *) &numero;
        do {
            scanf("%lld", &numero);
            for(i = sizeof(numero) - 1; i >= 0; i++)
                printf("%c", pc+i);
            printf("\n");
        } while(numero != 0);
        return EXIT_SUCCESS;
    }
    printf("Opcao nao reconhecida!\n");
    return EXIT_FAILURE; //44869576553
}
