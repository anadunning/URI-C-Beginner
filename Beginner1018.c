#include <stdio.h>

int main(){

	int valor;
	int n100, n50, n20, n10, n5, n2, n1;

	scanf("%d", &valor);

	printf("%d\n", valor);

	n100 = valor / 100;
	if (n100 >= 0)
		printf("%d nota(s) de R$ 100,00\n", n100);

	valor = valor % 100;

	n50 = valor / 50;
	if (n50 >= 0)
		printf("%d nota(s) de R$ 50,00\n", n50);

	valor = valor % 50;

	n20 = valor / 20;
	if (n20 >= 0)
		printf("%d nota(s) de R$ 20,00\n", n20);

	valor = valor % 20;

	n10 = valor / 10;
	if (n10 >= 0)
		printf("%d nota(s) de R$ 10,00\n", n10);

	valor = valor % 10;

	n5 = valor / 5;
	if (n5 >= 0)
		printf("%d nota(s) de R$ 5,00\n", n5);

	valor = valor % 5;

	n2 = valor / 2;
	if (n2 >= 0)
		printf("%d nota(s) de R$ 2,00\n", n2);

	valor = valor % 2;

	n1 = valor / 1;
	if (n1 >= 0)
		printf("%d nota(s) de R$ 1,00", n1);

	printf("\n");

	return 0;
}
