#include <stdio.h>

int main() {

    int num;
    int hours;
    float pay_rate, salary;

    scanf("%d", &num);
    scanf("%d", &hours);
    scanf("%f", &pay_rate);


    salary = hours * pay_rate;

    printf("NUMBER = %d", num);
    printf("\n");
    printf("SALARY = U$ %.2f", salary);

    printf("\n");

    return 0;
}
