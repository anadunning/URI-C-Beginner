#include <stdio.h>

int main(){

	int X;
	float Y;
	float Con;

	scanf("%d %f", &X, &Y);

	Con = X / Y;

	printf("%.3f km/l", Con);

	printf("\n");

	return 0;
}
