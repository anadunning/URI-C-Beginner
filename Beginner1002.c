# include <stdio.h>
# define Pi 3.14159

int main(){

	double R, A;

	scanf("%lf", &R);

	A = Pi * (R * R);

	printf("A=%.4lf", A);

	printf("\n");

    return 0;
}
