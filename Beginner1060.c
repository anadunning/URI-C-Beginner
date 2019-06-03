#include <stdio.h>

int main(){

    int i, soma = 0;
    float n[6];

    for (i = 0; i < 6; i++){
        scanf("%f", &n[i]);

        if(n[i] > 0){
            soma++;
        }
    }

    printf("%d valores positivos\n", soma);

    return 0;
}
