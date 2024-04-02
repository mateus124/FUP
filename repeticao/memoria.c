#include <stdio.h>

int main() {
    int indo, voltando, aux;
    scanf("%d %d", &indo, &voltando);
    aux = indo-1;

    printf("[ ");
    while(voltando != aux) {
        printf("%d ", indo);
        printf("%d ", voltando);
        indo++;
        voltando--;
    }
    printf("]");
}