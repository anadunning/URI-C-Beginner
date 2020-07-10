#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    long int m[101];
    double grade[101];
    double greatest = grade[0];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%ld %lf", &m[i], &grade[i]);
    }

    int greatestIndex = 0;
    for (i = 0; i < n; i++){
        if (grade[i] > greatest){
            greatest = grade[i];
            greatestIndex = i;
        }
    }

    if (greatest < 8.0){
        printf("Minimum note not reached\n");
    }
    else {
        printf("%ld\n", m[greatestIndex]);
    }
    //printf("%lf\n", greatest);

    return 0;
}
