#include <stdio.h>

int main(){

    int N, L, i;
    int m2, m3, m4, m5;
    m2 = m3 = m4 = m5 = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d", &L);

        if (L % 2 == 0){
            m2++;
        }
        if (L % 3 == 0){
            m3++;
        }
        if (L % 4 == 0){
            m4++;
        }
        if (L % 5 == 0){
            m5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}
