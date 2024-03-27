#include <stdio.h>

int main() {
    int c1, a1, c2, a2;
    scanf("%d %d %d %d", &c1, &a1, &c2, &a2);

    a1 *= c1;
    a2 *= c2;

    if (a1 > a2) {
        printf("%d", a1);
    } else {
        printf("%d", a2);
    }
    printf("\n");
}