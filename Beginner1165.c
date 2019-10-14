#include <stdio.h>

int main(){

    int N, X, i, j, count = 0;
    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d", &X);

        if (X <= 1){
            printf("%d nao eh primo\n", X);
        }

        for (j = 1; j <= X; j++){
            if (X % j == 0){
                count++;
            }
        }

        if (count > 2){
            printf("%d nao eh primo\n", X);
        }
        else {
            printf("%d eh primo\n", X);
        }
        count = 0;
    }

    return 0;
}
