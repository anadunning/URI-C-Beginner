#include <stdio.h>

int main(){

    int I = 1, J = 60;

    printf("I=%d J=%d\n", I, J);

    while (J != 0){

        printf("I=%d J=%d\n", I+=3, J-=5);
    }

    return 0;
}
