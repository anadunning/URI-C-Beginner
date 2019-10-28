#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C;
    double L;

    while (1){

        scanf("%d", &A);
        if (A == 0){
            break;
        }

        scanf("%d %d", &B, &C);

        L = sqrt((A * B * 100) / C);

        printf("%.0lf\n", trunc(L));
    }

    return 0;
}
