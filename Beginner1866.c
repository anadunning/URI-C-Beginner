#include <stdio.h>

int main(){

    int C, N, i;

    scanf("%d", &C);

    for(i = 0; i < C; i++){

        scanf("%d", &N);
        if (N % 2 == 0){
            printf("0\n");
        }
        else {
            printf("1\n");
        }
    }

    return 0;
}
