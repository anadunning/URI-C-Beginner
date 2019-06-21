#include <stdio.h>

int main(){

    int N, amount, i, totalAnimals;
    int C, R, S;
    float percC, percR, percS;
    char type;

    C = R = S = 0;
    percC = percR = percS = 0;
    totalAnimals = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        scanf("%d %c", &amount, &type);

        totalAnimals += amount;

        if (type == 'C'){
            C += amount;
        }
        else if (type == 'R'){
            R += amount;
        }
        else {
            S += amount;
        }

        percC = (C * 100.00) / totalAnimals;
        percR = (R * 100.00) / totalAnimals;
        percS = (S * 100.00) / totalAnimals;
    }

    printf("Total: %d cobaias\n", totalAnimals);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", percC);
    printf("Percentual de ratos: %.2f %%\n", percR);
    printf("Percentual de sapos: %.2f %%\n", percS);

    return 0;
}
