#include <stdio.h>

int main() {
    int inferior, superior, soma = 0;
    scanf("%d %d", &inferior, &superior);

    while (inferior <= superior) {
        if(inferior%2 != 0) {
            soma += inferior;
        }
        inferior++;
    }

    printf("%d", soma);
}