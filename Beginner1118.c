#include <stdio.h>

int main(){

    double n1, n2, media;
    int i = 0;

    do {

        scanf("%lf", &n1);

        while (n1 < 0 || n1 > 10.0){
            printf("nota invalida\n");
            scanf("%lf", &n1);
        }

        scanf("%lf", &n2);

        while (n2 < 0 || n2 > 10.0){
            printf("nota invalida\n");
            scanf("%lf", &n2);
        }

        media = (n1 + n2) / 2.0;

        printf("media = %.2lf\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &i);

        if (i < 1 || i > 2){

            while (i < 1 || i > 2){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &i);
            }
        }
        if (i == 2) break;

    } while (i == 1);

    return 0;
}
