#include <stdio.h>

int main(){

    char name[11];
    int N, S, B, A, i=0;
    int ss, bb, aa;
    int countS, countB, countA;
    int countss, countbb, countaa;
    double pS, pB, pA;

    countS = countB = countA = 0;
    countss = countbb = countaa = 0;
    pS = pB = pA = 0;

    scanf("%d", &N);

    while (i < N){

        scanf("%s", name);
        scanf("%d %d %d", &S, &B, &A);
        scanf("%d %d %d", &ss, &bb, &aa);

        countS += S;
        countB += B;
        countA += A;

        countss += ss;
        countbb += bb;
        countaa += aa;

        i++;
    }

    pS = (float) countss / countS;
    pB = (float) countbb / countB;
    pA = (float) countaa / countA;

    printf("Pontos de Saque: %.2lf %%.\n", pS * 100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", pB * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", pA * 100);

    return 0;
}
