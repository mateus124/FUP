#include <stdio.h>

int main() {
    int num, soma = 0;
    scanf("%d", &num);

    for(int i = 0; num > 0; i++) {
        if(i%3==0 && i%7!=0) {
            soma += i;
            num--;
        }
    }

    printf("%d", soma);
}