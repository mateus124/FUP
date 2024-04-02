#include <stdio.h>

int main() {
    int n, soma = 0;
    scanf("%d", &n);

    for(int i = 0; i<=n; i++){
        soma += i;
    }

    printf("%d", soma);
}