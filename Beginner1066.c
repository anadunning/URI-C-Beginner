#include <stdio.h>

int main(){

    int n[5], i;
    int even, odd, pos, neg;
    even = odd = pos = neg = 0;

    for(i = 0; i < 5; i++){

        scanf("%d", &n[i]);

        if (n[i] % 2 == 0){
            even++;
        }
        else {
            odd++;
        }

        if (n[i] > 0){
            pos++;
        }
        else if (n[i] < 0) {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
