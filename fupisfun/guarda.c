#include <stdio.h>

int main() {
    int wifi, login, admin;
    scanf("%d %d %d", &wifi, &login, &admin);
    if (wifi == 0) {
        printf("you must connect to wifi");
    } else if (login == 0) {
        printf("you need to login first");
    } else if(admin == 0) {
        printf("you must to login as admin");
    } else {
        printf("done");
    }
    printf("\n");
}