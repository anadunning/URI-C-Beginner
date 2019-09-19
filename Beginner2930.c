#include <stdio.h>

int main(){

    int E, D;

    scanf("%d %d", &E, &D);

    if (D - E >= 3){
        printf("Muito bem! Apresenta antes do Natal!\n");
    }
    else if ((D - E == 1) && (D < 23)){
        printf("Parece o trabalho do meu filho!\n");
        printf("TCC Apresentado!\n");
    }
    else if ((D - E == 1) && (D <= 23)){
        printf("Parece o trabalho do meu filho!\n");
        printf("Fail! Entao eh nataaaaal!\n");
    }
    else if (E > D){
        printf("Eu odeio a professora!\n");
    }

    return 0;
}
