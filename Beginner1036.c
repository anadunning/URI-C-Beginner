#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, R1, R2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (a == 0.0 || delta < 0){
        printf("Impossivel calcular");
    }

    if (a != 0.0 && delta >= 0){

        R1 = ((b*-1) + sqrt(delta))/(2 * a);

        R2 = ((b*-1) - sqrt(delta))/(2 * a);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf", R2);
    }

    printf("\n");

    return 0;
}
