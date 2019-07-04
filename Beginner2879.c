#include <stdio.h>

int main(){

    int N, i, porta, carro = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        scanf("%d", &porta);

        if (porta != 1){
            carro++;
        }
    }

    printf("%d\n", carro);

    return 0;
}
