#include <stdio.h>

int main(){

    int N, X, Y;
    double R;

    scanf("%d %d %d", &N, &X, &Y);

    R = (float) N / (X + Y);

    printf("%.2lf\n", R);

    return 0;
}
