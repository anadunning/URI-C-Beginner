#include <stdio.h>

int main(){

    int M, N, i, j, sum = 0;

    while (1){
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0){
            break;
        }

        if (N > M){
            for(i = M; i <= N; i++){
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
        else if (M > N){
            for(j = N; j <= M; j++){
                printf("%d ", j);
                sum += j;
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
    }
    return 0;
}
