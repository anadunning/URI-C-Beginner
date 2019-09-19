#include <stdio.h>

int main(){

    int c = 300, boi = 1500, bot = 600;
    int m = 1000, iara = 150, chica = 225;

    int ptC, ptBoi, ptBot, ptM, ptIara;
    int total;

    scanf("%d", &ptC);
    scanf("%d", &ptBoi);
    scanf("%d", &ptBot);
    scanf("%d", &ptM);
    scanf("%d", &ptIara);

    total = (ptC * c) + (ptBoi * boi) + (ptBot * bot) + (ptM * m) + (ptIara * iara) + chica;
    printf("%d\n", total);

    return 0;
}
