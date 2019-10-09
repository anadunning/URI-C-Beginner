#include <stdio.h>

int main(){

    int L, i, j, maior;

    while (scanf("%d", &L) != EOF) {

        int V[L];

        for (i = 0; i < L; i++){
            scanf("%d", &V[i]);

            maior = V[0];

            for (j = 1; j < L; j++){

                if (V[j] > maior){
                    maior = V[j];
                }
            }
        }

        if (maior < 10){
            printf("1\n");
        }
        else if (maior >= 10 && maior < 20){
            printf("2\n");
        }
        else if (maior >= 20) {
            printf("3\n");
        }
    }
    return 0;
}
