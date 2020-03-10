#include <stdio.h>

long long int fib(int n);

int main(){

    long long int X;
    int T, N, i = 0;

    scanf("%d", &T);

    while (i < T) {

        scanf("%d", &N);

        printf("Fib(%d) = %llu\n", N, fib(N));
        i++;
    }

    return 0;
}

long long int fib(int n) {

    long long int a = 0, b = 1, c;
    int i;

    if (n == 0) return a;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
