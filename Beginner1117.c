#include <stdio.h>

int main(){

    float x, y, media;

    scanf("%f", &x);

    while (x < 0 || x > 10.0){
        printf("nota invalida\n");
        scanf("%f", &x);
    }

    scanf("%f", &y);

    while (y < 0 || y > 10.0){
        printf("nota invalida\n");
        scanf("%f", &y);
    }

    media = (x + y) / 2;

    printf("media = %.2f\n", media);

    return 0;
}
