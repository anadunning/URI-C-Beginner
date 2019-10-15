#include <stdio.h>

int main(){

    int N, i;
    char name[15];
    char rc;
    int A, E, H, M, X;
    A = E = H = M = X = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%s %c", name, &rc);

        if (rc == 'A'){
            A++;
        }
        else if (rc == 'E'){
            E++;
        }
        else if (rc == 'H'){
            H++;
        }
        else if (rc == 'M'){
            M++;
        }
        else if (rc == 'X'){
            X++;
        }
    }
    printf("%d Hobbit(s)\n", X);
    printf("%d Humano(s)\n", H);
    printf("%d Elfo(s)\n", E);
    printf("%d Anao(s)\n", A);
    printf("%d Mago(s)\n", M);

    return 0;
}
