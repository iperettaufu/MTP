#include <stdio.h>
#include <time.h>
int main() {
    srand(time(0));
    int dado;
    dado = rand()%6 + 1;
    printf("Resultado do dado: %d", dado);
    return 0;
}
