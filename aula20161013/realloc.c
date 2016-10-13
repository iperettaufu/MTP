#include <stdio.h>
#include <stdlib.h>
int main() {
    int nnum, nmais, i, opc;
    int * p, *n;
    printf("Quantos? ");
    scanf("%d", &nnum);
    p = (int *) malloc(nnum*sizeof(int));
    for(i = 0; i < nnum; i++) {
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &p[i]);
    }
    for(i = 0; i < nnum; i++) printf("%d\n", p[i]);
    printf("Quer mais? (0 - nao; 1 - sim): ");
    scanf("%d", &opc);
    if(opc != 0){
        printf("Quantos? ");
        scanf("%d", &nmais);
        p = (int *) realloc(p, (nnum+nmais)*sizeof(int));
        for(i = nnum; i < nnum+nmais; i++) {
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &p[i]);
        }
        for(i = 0; i < nnum+nmais; i++) printf("%d\n", p[i]);
    }
    p = (int *) realloc(p, (nnum+nmais-2)*sizeof(int));
    for(i = 0; i < nnum+nmais; i++) printf("%d\n", p[i]);
    n = (int *) calloc(2,sizeof(int));
    free(p);
    free(n);
    return 0;
}
