#include <stdio.h>
#include <string.h>

int main(){

    int T, i;
    char villain[26];
    char hero[] = "Batmain";

    scanf("%d", &T);

    for (i = 0; i < T; i++){

      scanf("%s", villain);

        if (strcmp(hero, villain) == 0) {
            printf("N\n");
        }
        else {
            printf("Y\n");
        }
    }
    return 0;
}
