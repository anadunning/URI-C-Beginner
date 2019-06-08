#include <stdio.h>

int main(){

    int X, Y, i, sum = 0;

    scanf("%d %d", &X, &Y);

    if(Y > X){

        for(i = X + 1; i < Y; i++){

            if(i % 2 != 0){
                sum += i;
            }
        }
    }

    if (X > Y){

        for(i = Y + 1; i < X; i++){

            if(i % 2 != 0){
                sum += i;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
