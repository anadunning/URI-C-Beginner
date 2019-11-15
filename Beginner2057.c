#include <stdio.h>

int main(){

    int S, T, F, LocalT;

    scanf("%d %d %d", &S, &T, &F);

    LocalT = S + T + F;

    if (S + T > 24){
        LocalT = S + T - 24;
        LocalT = LocalT + F;
    }
    else if (S + T + F < 0){
        LocalT = S + T + F;
        LocalT = LocalT + 24;
    }

    printf("%d\n", LocalT);

    return 0;
}
