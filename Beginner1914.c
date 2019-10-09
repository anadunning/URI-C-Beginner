#include <stdio.h>
#include <string.h>

int main(){

    int qt, n, m, i;
    char name1[20], name2[20];
    char ans1[6], ans2[6];

    scanf("%d", &qt);

   for(i = 1; i <= qt; i++) {

        scanf("%s %s %s %s", name1, ans1, name2, ans2);
        scanf("%d %d", &n, &m);

        if (strcmp(ans1, "PAR") == 0 && (n + m) % 2 == 0){
            printf("%s\n", name1);
        }
        else if (strcmp(ans1, "IMPAR") == 0 && (n + m) % 2 != 0){
            printf("%s\n", name1);
        }
        else {
            printf("%s\n", name2);
        }
    }

    return 0;
}
