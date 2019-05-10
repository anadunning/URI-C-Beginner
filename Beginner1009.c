#include <stdio.h>

int main(){

	char name;
	double salary;
	double value_sold;
	double total_sal;

	scanf("%s", &name);
	scanf("%lf", &salary);
	scanf("%lf", &value_sold);

	total_sal = salary + (value_sold * 0.15);

	printf("TOTAL = R$ %.2lf", total_sal);

	printf("\n");

	return 0;
}
