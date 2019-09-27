#include <stdio.h>

int main(){

    int N, H, M, O, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d %d %d", &H, &M, &O);

        if ((H >= 0) && (H <= 9)){
            printf("0%d:", H);
        }
        else {
            printf("%d:", H);
        }

        if ((M >= 0) && (M <= 9)){
            printf("0%d", M);
        }
        else {
            printf("%d", M);
        }

        if (O == 1){
            printf(" - A porta abriu!\n");
        }
        else {
            printf(" - A porta fechou!\n");
        }

    }
    return 0;
}
