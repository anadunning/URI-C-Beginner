#include <stdio.h>

int main(){

    int N, i, m, f;
    char name[1000][20];
    char gender[2];
    m = f = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%s", name);
        scanf("%c", &gender);

        if (gender == 'M') {
            m++;
        }
        else {
            f++;
        }
    }
    printf("%d carrinhos\n", m);
    printf("%d bonecas\n", f);

    return 0;
}
