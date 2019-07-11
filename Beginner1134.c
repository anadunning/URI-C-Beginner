#include <stdio.h>

int main(){

    int code, fuel[] = {0, 0, 0};
    code = 0;

    do {

        if (code >= 1 || code <= 3){

            fuel[code - 1] += 1;
        }

        scanf("%d", &code);

    } while (code != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", fuel[0]);
    printf("Gasolina: %d\n", fuel[1]);
    printf("Diesel: %d\n", fuel[2]);

    return 0;
}
