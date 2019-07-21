#include <stdio.h>

int main(){

    int i, j, T, N[1000];

    scanf("%d", &T);

    for(i = j = 0; i < 1000; i++){

        if(j < T - 1){

            j += 1;
        }
        else {

            j = 0;
        }

        if (i == 0){
            j = 0;
        }

        N[i] = j;
    }

    for(i = 0; i < 1000; i++){

        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
