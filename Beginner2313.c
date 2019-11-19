#include <stdio.h>

int main(){

    long long int a, b, c, hip, c1, c2;

    scanf("%lli %lli %lli", &a, &b, &c);

    // Condition of Existence of a triangle:
	// (b - c) < a < (b + c)
	// (a - c) < b < (a + c)
	// (a - b) < c < (a + b)

	if (a >= b && a >= c){
        hip = a;
        c1 = b;
        c2 = c;
	}
	else if (b >= a && b >= c){
        hip = b;
        c1 = a;
        c2 = c;
	}
	else if (c >= a && c >= b){
        hip = c;
        c1 = a;
        c2 = b;
	}

    if (hip >= (c1 + c2)){
        printf("Invalido\n");
    }
    else if (hip == c1 && hip == c2){
        printf("Valido-Equilatero\n");

        if ((hip * hip) == (c1 * c1) + (c2 * c2)){
            printf("Retangulo: S\n");
        }
        else {
            printf("Retangulo: N\n");
        }
    }
    else if ((hip == c1 && hip != c2) || (hip == c2 && hip != c1) || (c1 == c2 && hip != c2)){
        printf("Valido-Isoceles\n");

        if ((hip * hip) == (c1 * c1) + (c2 * c2)){
            printf("Retangulo: S\n");
        }
        else {
            printf("Retangulo: N\n");
        }
    }
    else if (hip != c1 && hip != c2){
        printf("Valido-Escaleno\n");

        if ((hip * hip) == (c1 * c1) + (c2 * c2)){
            printf("Retangulo: S\n");
        }
        else {
            printf("Retangulo: N\n");
        }
    }

    return 0;
}
