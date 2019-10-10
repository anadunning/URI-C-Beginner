#include <stdio.h>
#include <string.h>

int main(){

    char T[510];
    int len;

    scanf("%[^\n]s", T);

    len = strlen(T);

    if (len <= 140){
        printf("TWEET\n");
    }
    else {
        printf("MUTE\n");
    }

    return 0;
}
