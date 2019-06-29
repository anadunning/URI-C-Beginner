#include <stdio.h>

int main(){

    int N, X, Y, i = 0, j, k, sum = 0;

    scanf("%d", &N);

    while (i < N){

        scanf("%d %d", &X, &Y);

        if (X > Y){

            for(j = Y+1; j <= X-1; j++){
                if (j % 2 != 0){
                    sum += j;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }
        else if (Y > X){

            for(k = X+1; k <= Y-1; k++){
                if (k % 2 != 0){
                    sum += k;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }
        else if (X == Y){
            printf("%d\n", sum = 0);
        }
        i++;
    }
    return 0;
}
