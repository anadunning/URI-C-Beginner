#include <stdio.h>

int main(){

    int L, C;

    scanf("%d", &L);
    scanf("%d", &C);

    if (L == C){
        printf("%d\n", 1);
    }
    else if (L % 2 == 0 && C % 2 == 0){
        printf("%d\n", 1);
    }
    else if (L % 2 != 0 && C % 2 != 0){
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", 0);
    }

    return 0;
}
