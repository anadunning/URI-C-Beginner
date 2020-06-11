#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j;
    double M[12][12], sum, avg;
    char Op[4];

    sum = avg = 0;

    scanf("%s", &Op);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
        // printf("Informe o numero para M[%d][%d]: ", i, j);
            scanf("%lf", &M[i][j]);
        }
    }

    if (*Op == 'S'){
        for (i = 0; i < 11; i++){
            for (j = i+1; j < 12; j++){
                sum += M[i][j];
            }
        }
        printf("%.1lf\n", sum);
    }
    else if (*Op == 'M'){
        for (i = 0; i < 11; i++){
            for (j = i+1; j < 12; j++){
                sum += M[i][j];
                avg = sum / 66;
            }
        }
        printf("%.1lf\n", avg);
    }
    return 0;
}
