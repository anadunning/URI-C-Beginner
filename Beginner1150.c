#include <stdio.h>

int main(){

    int X, Z, i, j, count = 0;

    scanf("%d", &X);
    scanf("%d", &Z);

    do {
        scanf("%d", &Z);

    } while (Z <= X);


    for(i = X, j = 0; j < Z; i++){
        j += i;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
