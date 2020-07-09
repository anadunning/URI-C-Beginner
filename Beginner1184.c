#include <stdio.h>

int main(){

    int i, j;
    double M[12][12], sum, avg;
    char Op[4];

    sum = avg = 0;

    scanf("%c", &Op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    if (*Op == 'S'){
        for (i = 11; i > 0; i--){
            for (j = i - 1; j >= 0; j--){
                //printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum += M[i][j];
            }
        }
        printf("%.1lf\n", sum);
    }
    else if (*Op == 'M'){
        for (i = 11; i > 0; i--){
            for (j = i - 1; j >= 0; j--){
                //printf("M[%d][%d] = %.1lf\n", i, j, M);
                sum += M[i][j];
                avg = sum / 66;
            }
        }
        printf("%.1lf\n", avg);
    }

    return 0;
}
