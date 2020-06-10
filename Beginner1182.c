#include <stdio.h>
#include <stdlib.h>

int main(){

    int C, i, j;
    char Op[4];
    double M[12][12], sum, avg;
    sum = avg = 0;

    scanf("%d", &C);
    fflush(stdin);
    scanf("%s", &Op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
           // printf("Informe o numero para M[%d][%d]: ", i, j);
            scanf("%lf", &M[i][j]);
        }
    }

    j = C;
    if (*Op == 'S') {
        for (i = 0; i < 12; i++){
                sum += M[i][j];
        }

        printf("%.1lf\n", sum);
    }
    else if (*Op == 'M') {
        for (i = 0; i < 12; i++){
            sum += M[i][j];
            avg = sum / 12;
        }

        printf("%.1lf\n", avg);
    }

    return 0;
}
