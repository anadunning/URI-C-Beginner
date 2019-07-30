#include <stdio.h>

int main(){

    int N, i, Y, p, min = 9000;

    scanf("%d", &N);

    int X[N];

    for(i = 0; i < N; i++){
        scanf("%d", &Y);
        X[i] = Y;
    }

    for(i = 0; i < N; i++){
        if (X[i] < min){
            min = X[i];
            p = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", p);

    return 0;
}
