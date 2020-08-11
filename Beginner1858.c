#include <stdio.h>

int main(){

    int N, T[100], lowest = 5000, i, pos = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &T[i]);

        if (T[i] < lowest) {
            lowest = T[i];
            pos = i + 1;
        }
    }
    printf("%d\n", pos);

    return 0;
}
