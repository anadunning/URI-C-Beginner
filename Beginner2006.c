#include <stdio.h>

int main(){

    int T, i, count = 0;
    int answers[5];

    scanf("%d", &T);

    for (i = 0; i < 5; i++){
        scanf("%d", &answers[i]);
    }

    for (i = 0; i < 5; i++){
        if (answers[i] == T){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
