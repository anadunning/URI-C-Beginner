#include <stdio.h>

int main(){

    float n[6], somaN = 0;
    int i, qtdeN = 0;

    for (i = 0; i < 6; i++){
        scanf("%f", &n[i]);

        if (n[i] > 0){
            somaN = somaN + n[i];
            qtdeN++;
        }
    }

    printf("%d valores positivos\n", qtdeN);
    printf("%.1f\n", somaN/qtdeN);


    return 0;
}
