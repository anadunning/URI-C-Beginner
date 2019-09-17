#include <stdio.h>

int main(){

    int age, sumA = 0, count = 0;
    float avg;

    while(1){

        scanf("%d", &age);

        if (age > 0) {
            sumA += age;
            count++;
        }

        if (age < 0) break;
    }
    avg = (float) sumA / count;

    printf("%.2f\n", avg);

    return 0;
}
