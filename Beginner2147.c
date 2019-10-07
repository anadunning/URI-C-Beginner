#include <stdio.h>
#include <string.h>

int main(){

    int C, i, l;
    char word[10001];
    float time;

    scanf("%d", &C);

    for (i = 0 ; i < C; i++) {

        scanf("%s", word);

        l = strlen(word);
        time = l * 0.01;

        printf("%.2f\n", time);
    }

    return 0;
}
