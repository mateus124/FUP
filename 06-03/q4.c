#include <stdio.h>

int precov, p100, imposto;
float lucro, roubo;

int main() {
    scanf("%d %d %d", &precov, &p100, &imposto);

    lucro = precov*(p100/100);
    roubo = precov*(imposto/100);

    printf("%f %f %f", lucro, roubo, precov-(lucro+roubo));
    
    return 0;
}