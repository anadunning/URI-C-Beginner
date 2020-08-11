#include <stdio.h>

int main(){

    int N;

    while(scanf("%d", &N) != EOF) {

        if (N % 100 == 0){
            printf("%d\n", N / 100);
        }
        else {
            printf("%d\n", (N / 100) + 1);
        }
    }
    return 0;
}
