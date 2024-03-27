#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    scanf("%d %d %c", &num1, &num2, &operacao);

    switch(operacao){
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
    }
    printf("\n");
}