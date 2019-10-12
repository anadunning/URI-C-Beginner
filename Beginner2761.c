#include <stdio.h>

int main(){
    int v;
    float p;
    char ch;
    char phrase[51];

    while (scanf("%d %f %c %[^\n]s", &v, &p, &ch, phrase) != EOF) {

        printf("%d%.6f%c%s\n", v, p, ch, phrase);
        printf("%d\t%.6f\t%c\t%s\n", v, p, ch, phrase);
        printf("%10d%10.6f%10c%10s\n", v, p, ch, phrase);
    }

    return 0;
}
