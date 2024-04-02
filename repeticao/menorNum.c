#include <stdio.h>

int main() {
    int num, menor = 999;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num < menor) {
            menor = num;
        }
    }

    printf("%d", menor);
}