#include <stdio.h>

int main(){

    double salary, perc, payrise, newSal;

    scanf("%lf", &salary);

    if (salary > 0 && salary <= 400.00){
        perc = 0.15;
        payrise = salary * perc;
        newSal = salary + payrise;
    }
    else if (salary >= 400.01 && salary <= 800.00){
        perc = 0.12;
        payrise = salary * perc;
        newSal = salary + payrise;
    }
    else if (salary >= 800.01 && salary <= 1200){
        perc = 0.10;
        payrise = salary * perc;
        newSal = salary + payrise;
    }
    else if (salary >= 1200.01 && salary <= 2000){
        perc = 0.07;
        payrise = salary * perc;
        newSal = salary + payrise;
    }
    else if (salary > 2000){
        perc = 0.04;
        payrise = salary * perc;
        newSal = salary + payrise;
    }

    printf("Novo salario: %.2lf\n", newSal);
    printf("Reajuste ganho: %.2lf\n", payrise);
    printf("Em percentual: %.0lf %%\n", perc * 100);

    return 0;
}
