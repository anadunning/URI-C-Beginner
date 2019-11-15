#include <stdio.h>
#include <math.h>

int main(){

    int N, v, i, imp = 0, arq = 0;

    while (scanf("%d", &N) != EOF){

        for (i = 0; i < N; i++){

            scanf("%d", &v);

            if (v == 1){
                imp++;
            }
        }

        if (imp >= round(N * 2)/3){
            printf("impeachment\n");
        }
        else {
            printf("acusacao arquivada\n");
        }

        imp = 0, arq = 0;
    }

    return 0;
}
