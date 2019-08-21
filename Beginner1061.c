#include <stdio.h>

int main(){

    int diaI, horaI, minI, segI;
    int diaF, horaF, minF, segF;
    char dia1[4], dia2[4];
    char dp1[2], dp2[2], dp3[2], dp4[2];

    // Reading the input in the test format
    scanf("%s %d", dia1, &diaI);
    scanf("%d %s %d %s %d", &horaI, dp1, &minI, dp2, &segI);
    scanf("%s %d", dia2, &diaF);
    scanf("%d %s %d %s %d", &horaF, dp3, &minF, dp4, &segF);

    int tI, tF, tEvent;

    // Converting all times to seconds
    tI = segI + minI*60 + horaI*60*60 + diaI*60*60*24;
    tF = segF + minF*60 + horaF*60*60 + diaF*60*60*24;

    tEvent = tF - tI;

    // Converting time back to day, hour, minute and second
    printf("%d dia(s)\n", tEvent / (60*60*24));
    tEvent = tEvent % (60*60*24);
    printf("%d hora(s)\n", tEvent / (60*60));
    tEvent = tEvent % (60*60);
    printf("%d minuto(s)\n", tEvent / 60);
    tEvent = tEvent % 60;
    printf("%d segundo(s)\n", tEvent);

    return 0;
}
