#include <stdio.h>

int main(){

    int n[5], i, even = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0){
            even++;
        }
    }

    printf("%d valores pares\n", even);

    return 0;
}
