#include <stdio.h>

int main(){

    int T, i, j;
    float Ti;

    while (scanf("%d", &T) != EOF) {

        float Smallest = 5000.00;

        for(i = 0; i < T; i++){

            scanf("%f", &Ti);

            if (Ti < Smallest){
                Smallest = Ti;
            }
        }

        printf("%.2f\n", Smallest);
    }

    return 0;
}
