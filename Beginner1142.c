#include <stdio.h>

int main(){

    int N, i;
    int n1, n2, n3, aux = 1;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        n1 = aux;
        n2 = aux + 1;
        n3 = aux + 2;

        printf("%d %d %d PUM\n", n1, n2, n3);

        aux += 4;
    }

    return 0;
}
