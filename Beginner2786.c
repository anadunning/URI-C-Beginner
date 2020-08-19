#include <stdio.h>

int main(){

    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);

    printf("%d\n", ((L * C) + ((L-1) * (C-1))));
    printf("%d\n", (L - 1) * 2 + (C - 1) * 2);

    return 0;
}
