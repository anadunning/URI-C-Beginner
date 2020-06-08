#include <stdio.h>

int main(){

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    a = 0;
    b = 1;
    c = 2;
    d = 3;
    e = 4;
    f = 5;
    g = 6;
    h = 7;
    i = 8;
    j = 9;
    k = 10;
    l = 11;
    m = 12;
    n = 13;
    o = 14;
    p = 15;

    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");

    for (i = 0; i < 16; i++){
        printf("|%7d    |%5o    |%8X       |\n", a+i, a+i, a+i);
    }

    printf("---------------------------------------\n");

    return 0;
}
