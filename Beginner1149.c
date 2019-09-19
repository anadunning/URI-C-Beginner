#include <stdio.h>

int main(){

    int A, N, i, sum = 0;

    scanf("%d %d", &A, &N);

    while (N <= 0){
        scanf("%d", &N);
    }

    for (i = A; i < (A + N); i++){
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
