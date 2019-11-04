#include <stdio.h>

int main(){

    int i, T, PA, PB, t=0;
    double G1, G2;

    scanf("%d", &T);

    for(i = 0; i < T; i++){

        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while(PA <= PB){
            PA += PA * (G1 * 0.01);
            PB += PB * (G2 * 0.01);
            t++;

            if (t > 100) break;
        }

        if (t <= 100){
            printf("%d anos.\n", t);
        }
        else {
            printf("Mais de 1 seculo.\n");
        }

        t = 0;
    }

    return 0;
}
