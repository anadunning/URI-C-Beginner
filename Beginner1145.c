#include <stdio.h>

int main(){

    int x, y, i, mad = 1;

    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++){

        if (mad == 1){
            printf("%d", i);
        }
        else {
            printf(" %d", i);
        }

        if (mad == x){
            printf("\n");
            mad = 0;
        }
        mad++;
    }

    return 0;
}
