#include <stdio.h>
#include <string.h>

int main(){

    int N, i;
    char question[50];

    scanf("%d\n", &N);

    for(i = 0; i < N; i++){

        fgets(question, 50, stdin);
        printf("I am Toorg!\n");
    }

    return 0;
}
