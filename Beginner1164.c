#include <stdio.h>

int main(){

    int N, X, i = 0, j, sum = 0;

    scanf("%d", &N);

    while (i < N){

        scanf("%d", &X);

            for(j = 1; j <= X; j++){

                if (X % j == 0){
                    sum += j;
                }
            }

            //printf("%d\n", sum);

            if (sum - X == X){
                printf("%d eh perfeito\n", X);
            }
            else {
                printf("%d nao eh perfeito\n", X);
            }

        sum = 0;
        i++;
    }

    return 0;
}
