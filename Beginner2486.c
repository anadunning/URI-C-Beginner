#include <stdio.h>
#include <string.h>

int main(){

    int T, N, i, intake, sum = 0;
    char food[30];

    scanf("%d", &T);

    while (T != 0){

        for (i = 0; i < T; i++){

            scanf("%d %[^\n]s", &N, food);

            if (strcmp(food, "suco de laranja") == 0){
                intake = N * 120;
            }
            else if (strcmp(food, "morango fresco") == 0){
                intake = N * 85;
            }
            else if (strcmp(food, "mamao") == 0){
                intake = N * 85;
            }
            else if (strcmp(food, "goiaba vermelha") == 0){
                intake = N * 70;
            }
            else if (strcmp(food, "manga") == 0){
                intake = N * 56;
            }
            else if (strcmp(food, "laranja") == 0){
                intake = N * 50;
            }
            else if (strcmp(food, "brocolis") == 0){
                intake = N * 34;
            }

            sum += intake;
        }
        if (sum > 130){
            sum = sum - 130;
            printf("Menos %d mg\n", sum);
        }
        else if (sum < 110){
            sum = 110 - sum;
            printf("Mais %d mg\n", sum);
        }
        else if (sum > 110 && sum <= 130){
            printf("%d mg\n", sum);
        }

        sum = 0;
        scanf("%d", &T);
    }
    return 0;
}
