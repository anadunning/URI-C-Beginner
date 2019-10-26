#include <stdio.h>

int main(){

    unsigned long long int P;

    while (scanf("%llu", &P) != EOF){

        if (P == -1) break;

        if (P == 0){
            printf("%llu\n", P);
        }
        else if (P > 0){
            printf("%llu\n", P - 1);
        }
    }
    return 0;
}
