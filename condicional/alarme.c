#include <stdio.h>

int main() {
    int horaDorm, minutoDorm, segundoDorm, horaAcor, minutoAcor, segundoAcor;
    int horaSono, minutoSono, segundoSono;
    scanf("%d %d %d %d %d %d", &horaDorm, &minutoDorm, &segundoDorm, &horaAcor, &minutoAcor, &segundoAcor);

    //Tratando horas
    if(horaDorm < horaAcor) {
        horaSono = horaAcor-horaDorm;
    } else {
        horaSono = 24 - horaDorm;
        horaSono += horaAcor;
    }

    //Tratando minutos
    if(minutoDorm > minutoAcor) { //11, 10
        minutoSono = minutoDorm - minutoAcor;
    } else {
        minutoSono = minutoAcor - minutoDorm;
    }
    
    //Tratando segundos
    if(segundoDorm > segundoAcor) {
        segundoSono = 60 - segundoDorm;
        segundoSono += segundoAcor;
        minutoSono--;
    } else {
        segundoSono = segundoAcor - segundoDorm;
    }

    printf("%d %d %d", horaSono, minutoSono, segundoSono);
}