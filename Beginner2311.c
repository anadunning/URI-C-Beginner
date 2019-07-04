#include <stdio.h>

int main(){

    int N, i, j;
    char name[20];
    float D, scores;

    scanf("%d", &N);

    for(i = 0; i < N; i++){

        float max = -1000.0, min = 5000.0, result = 0.00;
        scanf("%s", name);
        scanf("%f", &D);

        for(j = 0; j < 7; j++){
            scanf("%f", &scores);

            if (scores > max){
                max = scores;
            }
            if (scores < min){
                min = scores;
            }
            result += scores;
        }

        result -= (max + min);
        result *= D;

        printf("%s %.2f\n", name, result);
    }

    return 0;
}
