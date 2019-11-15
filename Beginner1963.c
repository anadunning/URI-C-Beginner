#include <stdio.h>

int main(){

    double A, B, inc;

    scanf("%lf %lf", &A, &B);

    inc = ((B - A) / A) * 100.00;
    printf("%.2lf%%\n", inc);

    return 0;
}
