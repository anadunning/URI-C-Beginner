#include <stdio.h>

int main(){

    int N, hours, min, sec;

    scanf("%d", &N);

    hours = N / 3600;
    N = N % 3600;

    min = N / 60;
    N = N % 60;

    sec = N;

    printf("%d:%d:%d", hours, min, sec);

    printf("\n");

    return 0;
}
