#include <stdio.h>

int main(){

    int T, N, K, i;

    scanf("%d", &T);

    for(i = 0; i < T; i++){

        scanf("%d %d", &N, &K);

        printf("%d\n", (N % K) + (N / K));
    }

    return 0;
}
