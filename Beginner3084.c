#include <stdio.h>

int main(){

    int h, m, hh, mm;

    while (scanf("%d %d", &h, &m) != EOF) {

        if ((h == 0 && m == 0) || (m == 360)) {
            hh = 0;
            mm = 0;
            printf("0%d:0%d\n", hh, mm);
        }
        else {
            hh = h / 30;
            mm = m / 6;
            printf("%02d:%02d\n", hh, mm);
        }
    }
    return 0;
}
