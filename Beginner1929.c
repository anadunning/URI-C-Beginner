#include <stdio.h>

// Condition of Existence of a triangle:
	// (b - c) < a < (b + c)
	// (a - c) < b < (a + c)
	// (a - b) < c < (a + b)

int main(){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)){
        printf("S\n");
    }
    else if (((a + d) > c) && ((a + c) > d) && ((c + d) > a)) {
        printf("S\n");
    }
    else if (((a + b) > d) && ((a + d) > b) && ((b + d) > a)) {
        printf("S\n");
    }
    else if (((b + c) > d) && ((b + d) > c) && ((c + d) > b)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
