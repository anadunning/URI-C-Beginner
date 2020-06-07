#include <stdio.h>

int main(){

    int A1, A2, A3;
    int totalA1, totalA2, totalA3;
    totalA1 = totalA2 = totalA3 = 0;

    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);

    totalA1 = 2 * (A2 + 2 * A3);
    totalA2 = 2 * (A1 + A3);
    totalA3 = 2 * (2 * A1 + A2);

    if (totalA1 <= totalA2 && totalA1 <= totalA3) {
//        printf("floor 1: %d\n", totalA1);
        printf("%d\n", totalA1);
    }
    else if (totalA2 <= totalA1 && totalA2 <= totalA3) {
//        printf("floor 2: %d\n", totalA2);
        printf("%d\n", totalA2);
    }
    else if (totalA3 <= totalA1 && totalA3 <= totalA2) {
//        printf("floor 3: %d\n", totalA3);
        printf("%d\n", totalA3);
    }

    return 0;
}
