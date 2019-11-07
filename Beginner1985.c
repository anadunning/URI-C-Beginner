#include <stdio.h>

int main(){

    int p, q, num, i;
    double a, sum = 0;

    scanf("%d", &p);

    for(i = 0; i < p; i++){

        scanf("%d %d", &num, &q);

        switch(num){

        case 1001:
            a = q * 1.50;
            break;

        case 1002:
            a = q * 2.50;
            break;

        case 1003:
            a = q * 3.50;
            break;

        case 1004:
            a = q * 4.50;
            break;

        case 1005:
            a = q * 5.50;

        }
        sum += a;
    }

    printf("%.2lf\n", sum);

    return 0;
}
