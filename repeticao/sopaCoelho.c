#include <stdio.h>

int main() {
    int n, aux = 0;
    scanf("%d", &n);
    long int numAtual = 1, numAnterior = 0, numAnterior2 = 0;

    while(n > 1) {
        numAnterior2 = numAnterior;
        numAnterior = numAtual;
        numAtual = numAnterior + numAnterior2;
        n--;
    }
    printf("%ld\n", numAtual);
}