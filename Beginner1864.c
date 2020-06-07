#include <stdio.h>
#include <string.h>

int main(){

    int N, i, size;
    char quote[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    size = strlen(quote);

    scanf("%d", &N);

    for (i = 0; i < (size - (size - N)); i++) {
        printf("%c", quote[i]);
    }

    printf("\n");

    return 0;
}
