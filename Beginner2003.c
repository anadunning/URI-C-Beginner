#include <stdio.h>

int main(){

    int h, m, T, t;

    while (scanf("%d:%d", &h, &m) != EOF){

        T = 420;
        t = (h * 60) + m;

        if (t <= 420){
            printf("Atraso maximo: 0\n");
        }
        else if (t > 420){
            printf("Atraso maximo: %d\n", t - T);
        }
    }

    return 0;
}
