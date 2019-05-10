#include <stdio.h>

int main(){

	int time, speed, dist;
	float fuel;

	scanf("%d", &time);
	scanf("%d", &speed);

	dist = time*speed;

	fuel = (float)dist/12;

	printf("%.3f", fuel);
	printf("\n");

	return 0;
}
