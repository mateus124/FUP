#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    if(salario > 2000) {
        salario += salario*0.05;
    } else if (salario > 1500) {
        salario += salario*0.1;
    } else if (salario> 1000) {
        salario += salario*0.15;
    } else {
        salario += salario*0.2;
    }

    printf("%.2f", salario);
}