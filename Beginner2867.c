#include <stdio.h>
#include <math.h>

int main(){

    int C, N, M, i, count = 0;
    double num;

    scanf("%d", &C);

    for (i = 0; i < C; i++){

        scanf("%d %d", &N, &M);

        //num = (M * log(N));
        num = log10(N)*M + 1;

        printf("%.0lf\n", floor(num));
    }

    return 0;
}
