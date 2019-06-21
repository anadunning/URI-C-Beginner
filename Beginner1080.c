#include <stdio.h>

int main(){

    int n, i, max = -1000, pos;

    for(i = 1; i <= 100; i++){

        scanf("%d", &n);

            if (n > max){
                max = n;
                pos = i;
            }
    }

    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}
