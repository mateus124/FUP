#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++) {
        if(i*i == numero) {
            printf("sim");
            return 0;
        }
    }
    printf("nao");
}