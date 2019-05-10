# include <stdio.h>

int main() {

	int PRODUCT_CODE1, PRODUCT_CODE2, QTY1, QTY2;
	float PRICE1, PRICE2;
	float TOTAL;

	scanf("%d %d %f", &PRODUCT_CODE1, &QTY1, &PRICE1);
	scanf("%d %d %f", &PRODUCT_CODE2, &QTY2, &PRICE2);

	TOTAL = (QTY1 * PRICE1) + (QTY2 * PRICE2);

	printf("VALOR A PAGAR: R$ %.2f", TOTAL);

	printf("\n");

	return 0;
}
