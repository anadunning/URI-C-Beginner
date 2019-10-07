#include <stdio.h>

int main(){

    int T, i, R1, R2, C;

    scanf("%d", &T);

    for (i = 0; i < T; i++){

        scanf("%d %d", &R1, &R2);

        C = R1 + R2;

        printf("%d\n", C);
    }

    return 0;
}
