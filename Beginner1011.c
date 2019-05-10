#include <stdio.h>
#define pi 3.14159

int main(){

	int R;
	double V;

	scanf("%d", &R);

	V = (4.0/3) * pi * R * R * R;

	printf("VOLUME = %.3lf", V);

	printf("\n");

	return 0;
}
