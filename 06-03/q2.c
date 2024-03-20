#include <stdio.h>
float altura, peso;

int main() {
    scanf("%f %f", &peso, &altura);
    printf("%f", peso/(altura*altura));
}