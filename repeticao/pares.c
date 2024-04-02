#include <stdio.h>

int main() {
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("invalido");
    } else {
        while(a <= b) {
            if(a%2==0 && a%3==0) {
                soma += a;
            }
            a++;
        }
        printf("%d", soma);
    }
}