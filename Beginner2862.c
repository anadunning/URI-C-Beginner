#include <stdio.h>

int main(){

    int N, i, energy;

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%d", &energy);

        if (energy <= 8000){
            printf("Inseto!\n");
        }
        else {
            printf("Mais de 8000!\n");
        }
    }

    return 0;
}
