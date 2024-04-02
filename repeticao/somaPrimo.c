#include <stdio.h>

int verifica(int n1) {
    if(n1 == 0 || n1 == 1) {
        return 0;
    }
    
    for(int i=2; i < n1; i++) {
        if(n1%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, soma = 0;
    scanf("%d", &num);

    for(int i = 0; i <=num; i++) {
        if(verifica(i) == 1) {
            soma += i;
        }
    }

    printf("%d", soma);
}