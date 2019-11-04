#include <stdio.h>
#define n 3.14

int main(){

    double h, V, d, A;

    while (scanf("%lf", &V) != EOF){

        scanf("%lf", &d);

        A = (n * (d / 2) * (d / 2));
        h = V / A;

        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", A);
    }

    return 0;
}
