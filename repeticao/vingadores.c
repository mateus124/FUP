#include <stdio.h>

int main() {
    int numero, vetor, contador = 0, temp;
    scanf("%d %d", &numero, &vetor);

    while(vetor > 0) {
        scanf("%d", &temp);
        if(temp == numero) {
            contador++;
        }
        vetor--;
    }

    printf("%d", contador);
}