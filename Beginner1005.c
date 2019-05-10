#include <stdio.h>

int main() {

    float T1, T2, MEDIA;
    scanf("%f %f", &T1, &T2);

    MEDIA = ((3.5 * T1) + (7.5 * T2)) / 11;
    printf("MEDIA = %.5f", MEDIA);

    printf("\n");

    return 0;
}
