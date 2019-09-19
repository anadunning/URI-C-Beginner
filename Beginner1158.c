#include <stdio.h>

int main(){

    int N, X, Y, i, j, sum = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d %d", &X, &Y);

        if (X % 2 == 0){
            X += 1;

            for (j = X; j < (X + (Y * 2)); j = j + 2){
                sum += j;
            }
        }
        else if (X % 2 != 0){

            for (j = X; j < (X + (Y * 2)); j = j + 2){
                sum += j;
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
