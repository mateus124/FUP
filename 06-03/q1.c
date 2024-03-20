#include<stdio.h>
int n1, n2, n3, p1, p2, p3;
float media;

int main()
{
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &p1, &p2, &p3);
    media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("%f", media);
    return 0;
}