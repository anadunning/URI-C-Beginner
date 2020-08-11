#include <stdio.h>

int main(){

    int X;
    long int M, E;

    scanf("%d %ld", &X, &M);

    while (X != 0 && M != 0) {
        E = X * M;

        printf("%d\n", E);

        scanf("%d %ld", &X, &M);
    }
    return 0;
}
