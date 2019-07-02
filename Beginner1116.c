#include <stdio.h>

int main(){

    int X, Y, N, i;
    float d;

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%d %d", &X, &Y);

        if (Y == 0){
            printf("divisao impossivel\n");
        }
        else {
            d = (float) X / Y;
            printf("%.1f\n", d);
        }
    }

    return 0;
}
