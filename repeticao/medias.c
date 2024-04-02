#include <stdio.h>

int main() {
    int n;
    float aux, notas = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &aux);
        notas += aux;
    }

    printf("%f", (notas/n));
}