#include <stdio.h>

int main(){

    int i, j;
    double M[12][12], sum1, sum2;
    char Op[2];

    sum1 = sum2 = 0;

    scanf("%c", &Op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    if (*Op == 'S'){
        for (i = 0; i < 5; i++){
            for (j = i+1; j < 7; j++){
                printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum1 += M[i][j];
            }
        }
        printf("%.1lf\n", sum1);
        printf("---------------");

        for (i = 0; i < 4; i++){
            for (j = 7; j < 11-i; j++){
                //printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum2 += M[i][j];
            }
        }
        //printf("%.1lf\n", sum2);
        printf("%.1lf\n", sum1 + sum2);
    }
    else if (*Op == 'M'){
        for (i = 0; i < 5; i++){
            for (j = i+1; j < 7; j++){
                //printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum1 += M[i][j];
            }
        }
        //printf("%.1lf\n", sum1);
        //printf("---------------");

        for (i = 0; i < 4; i++){
            for (j = 7; j < 11-i; j++){
                //printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum2 += M[i][j];
            }
        }
        //printf("%.1lf\n", sum2);
        printf("%.1lf\n", (sum1 + sum2) / 30);
    }

    return 0;
}
