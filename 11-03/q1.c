#include <stdio.h>

int anoAtual, anoNasc;

int main() {
    scanf("%d %d", &anoAtual, &anoNasc);

    printf("Idade Atual: %d", anoAtual - anoNasc);
    printf("\nIdade em 2050: %d\n", 2050 - anoNasc);

    return 0;
}