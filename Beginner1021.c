#include <stdio.h>

int main(){

    int valor, N1, N2;

    int n2, n5, n10, n20, n50, n100;
    int c001, c005, c010, c025, c050, c1;

    // I need to read a decimal value.
    // This value compulsorily needs to have two decimal places.
    scanf("%d.%d", &N1, &N2);

    // To calculate all notes and coins, I need to use module,
    // which works only with integers to obtain the remainder.
    // For this reason, the calculation of valor is done below.
    // I get N1 and multiply by 100, then add the decimal part.
    // Valor is still an integer and I'll be able to use module
    // with it to get all notes and coins.
    valor = N1 * 100 + N2;

    n100 = valor / 10000;
    valor = valor % 10000;

    n50 = valor / 5000;
    valor = valor % 5000;

    n20 = valor / 2000;
    valor = valor % 2000;

    n10 = valor / 1000;
    valor = valor % 1000;

    n5 = valor / 500;
    valor = valor % 500;

    n2 = valor / 200;
    valor = valor % 200;

    c1 = valor / 100;
    valor = valor % 100;

    c050 = valor / 50;
    valor = valor % 50;

    c025 = valor / 25;
    valor = valor % 25;

    c010 = valor / 10;
    valor = valor % 10;

    c005 = valor / 5;
    valor = valor % 5;

    c001 = valor;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c050);
    printf("%d moeda(s) de R$ 0.25\n", c025);
    printf("%d moeda(s) de R$ 0.10\n", c010);
    printf("%d moeda(s) de R$ 0.05\n", c005);
    printf("%d moeda(s) de R$ 0.01\n", c001);

    return 0;
}
