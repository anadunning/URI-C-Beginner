#include <stdio.h>

int main(){

    int C, B, P, Cr, Br, Pr;
    int pc, pb, pp;
    pc = pb = pp = 0;

    scanf("%d %d %d", &C, &B, &P);
    scanf("%d %d %d", &Cr, &Br, &Pr);

    if (Cr > C){
        pc = Cr - C;
    }

    if (Br > B){
        pb = Br - B;
    }

    if (Pr > P){
        pp = Pr - P;
    }

    printf("%d\n", pc + pb + pp);

    return 0;
}
