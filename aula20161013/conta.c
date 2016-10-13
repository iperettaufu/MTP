#include <stdio.h>
#include <stdlib.h>
int main() {
    int nnum;
    printf("Contar ate quanto? ");
    scanf("%d", &nnum);
    contar(nnum);
    printf("\n");
    printf("Fatorial de %d = %d\n", nnum, fat(nnum));
    return 0;
}

void contar(int n) {
    if(n != 0) contar(n-1);
    printf("%d ", n);
}

int fat(n) {
    if(n == 0) return 1;
    else return n*fat(n-1);
}
