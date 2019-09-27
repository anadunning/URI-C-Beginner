#include <stdio.h>
#include <string.h>

int main(){

    char name[501];

   // fgets(name, 501, stdin);
    scanf("%[^\n]s", name);

    if (strlen(name) <= 80){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
