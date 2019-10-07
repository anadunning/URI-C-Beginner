#include <stdio.h>

int main(){

    int N, pen, ult, atual, i;
    pen = 0;
    ult = 1;

    scanf("%d", &N);

    if (N == 1) {
        printf("%d", pen);
    }
    else if (N == 2) {
        printf("%d %d", pen, ult);
    }
    else {

        printf("%d %d", pen, ult);

        while (N >= 3) {
            atual = pen + ult;
            pen = ult;
            ult = atual;

            if (i != N){
                printf(" %d", atual);
            }
            else {
                printf("%d", atual);
            }
            N--;
        }
    }

    printf("\n");

    return 0;
}
