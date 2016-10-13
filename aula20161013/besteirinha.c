#include <stdio.h>
#include <stdlib.h>
int main() {
    float * num;
    int nnum, i;
    printf("Quantos numeros? ");
    scanf("%d", &nnum);
    num = (float *) malloc(nnum*sizeof(float));
    for(i = 0; i < nnum; i++) {
        printf("Entre com o numero %d: ", i+1);
        scanf("%f", &num[i]);
    }
    for(i = 0; i < nnum; i++) printf("%f\n", num[i]);
    free(num);
    return 0;
}

