#include <stdio.h>

int main(){

    double a, b, c, A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Arrange the triangle sides in decreasing order,
    // so that the side A is the biggest of the three sides.

    if (a >= b && a >= c){
        A = a;
        B = b;
        C = c;

    } else if (b >= a && b >= c) {
        A = b;
        B = a;
        C = c;

    } else if (c >= a && c >= b){
        A = c;
        B = a;
        C = b;
    }

    if (A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A*A > (B*B + C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A < (B*B + C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    // Independent conditions
    if ((A == B) && (A == C)){
        printf("TRIANGULO EQUILATERO\n");
    }

    if((A == B && A != C) || (A == C && A != B) || (B == C && A != C)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
