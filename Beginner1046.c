#include <stdio.h>

int main() {

    int start, end, duration;

    scanf("%d %d", &start, &end);

    if (end > start){
        duration = end - start;
        printf("O JOGO DUROU %d HORA(S)", duration);
    }
    else if (start > end){
        duration = (24 - start) + end;
        printf("O JOGO DUROU %d HORA(S)", duration);
    }
    else if (end == start) {
        printf("O JOGO DUROU 24 HORA(S)");
    }

    printf("\n");

    return 0;
}
