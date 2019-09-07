#include <stdio.h>

int main(){

    int X, i, sum = 0;

    while (1){

        scanf("%d", &X);

        if (X == 0) break;

        if (X % 2 != 0){
            X++;
        }

        for(i = 0; i < 5; i++){
            sum += X;
            X += 2;
        }

        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
