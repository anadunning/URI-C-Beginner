#include <stdio.h>

int main(){

    int T, B, i;
    int A1, D1, L1, A2, D2, L2, Dab, Gua;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d", &B);
        scanf("%d %d %d", &A1, &D1, &L1);
        scanf("%d %d %d", &A2, &D2, &L2);

        if (L1 % 2 == 0) {
            Dab = ((A1 + D1) / 2) + B;
        }
        else {
            Dab = (A1 + D1) / 2;
        }

        if (L2 % 2 == 0) {
            Gua = ((A2 + D2) / 2) + B;
        }
        else {
            Gua = (A2 + D2) / 2;
        }

        if (Dab > Gua) {
            printf("Dabriel\n");
        }
        else if (Dab < Gua) {
            printf("Guarte\n");
        }
        else {
            printf("Empate\n");
        }
    }
    return 0;
}
