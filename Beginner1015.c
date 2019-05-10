#include <stdio.h>
#include <math.h>

int main(){

	float x1, y1;
	float x2, y2;
	float dist, d1, d2;

	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);

	d1 = pow((x2 - x1), 2);
	d2 = pow((y2 - y1), 2);

	dist = sqrt(d1 + d2);

	printf("%.4f", dist);

	printf("\n");

	return 0;
}
