#include <stdio.h>

int main(){

    int I = 1, J = 7;
    int i;

    while (I <= 9){

        for(i = 1; i <= 3; i++){
            printf("I=%d J=%d\n", I, J--);
        }

    I += 2;
    J = 7;

    }

    return 0;
}
