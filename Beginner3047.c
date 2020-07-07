#include <stdio.h>

int main(){

    int m, a, b, c;

    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    c = m - a - b;

    if ((a > b) && (a > c)){
        printf("%d\n", a);
    }
    else if ((b > a) && (b > c)){
        printf("%d\n", b);
    }
    else {
        printf("%d\n", c);
    }

    return 0;
}
