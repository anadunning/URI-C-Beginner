#include <stdio.h>

int main(){

    int initialHour, initialMinute, finalHour, finalMinute, durationH, durationM;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    // Calculating the duration in hours:
    durationH = finalHour - initialHour;

    if (durationH < 0){
        durationH = 24 - initialHour + finalHour;
    }

    // Calculating the duration in minutes:
    durationM = finalMinute - initialMinute;

    if (durationM < 0){
        durationM = 60 - initialMinute + finalMinute;
        durationH--;
    }

    if (initialHour == finalHour && initialMinute == finalMinute){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationH, durationM);
    }

    return 0;
}
