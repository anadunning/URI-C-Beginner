#include <stdio.h>

int main(){

	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	// Condition of Existence of a triangle:
	// (b - c) < a < (b + c)
	// (a - c) < b < (a + c)
	// (a - b) < c < (a + b)

	// Triangle perimeter: P = a + b + c
	// Trapezium area: A = ((a + b) * c) / 2;

	if ((a > (b-c)) && (a < (b+c) && (b > (a-c)) && (b < (a+c)) && (c > (a-b)) && (c < (a+b))))
		printf("Perimetro = %.1f", a + b + c);
	else
		printf("Area = %.1f", ((a + b) * c) / 2);

	printf("\n");

	return 0;
}
