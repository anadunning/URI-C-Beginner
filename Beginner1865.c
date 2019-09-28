#include <stdio.h>
#include <string.h>

int main(){

    int C, N, i;
    char name[20];
    char hero[] = "Thor";

    scanf("%d", &C);

    for (i = 0; i < C; i++){

        scanf("%s %d", name, &N);

        if (strcmp(hero, name) == 0){
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}
