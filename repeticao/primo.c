#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if(num == 0 || num == 1) {
        printf("nao");
        return 0;
    }
    
    for(int i=2; i < num; i++) {
        if(num%i==0) {
            printf("nao");
            return 0;
        }
    }
    printf("sim");
}