#include <stdio.h>

int main(){

    float S = 1;

    float i, j;

    for(i = 3, j = 2; i <= 39; i += 2, j *= 2){
        S += (i / j);
    }

    printf("%.2f\n", S);

    return 0;
}
