#include <stdio.h>

int main(){

    int goalInt, goalGrm, grenal = 0;
    int partida = 0;
    int vInt = 0;
    int vGrm = 0;
    int draw = 0;

    do {
        partida++;
        scanf("%d %d", &goalInt, &goalGrm);

        if (goalInt > goalGrm){
            vInt++;
        }
        else if (goalInt < goalGrm){
            vGrm++;
        }
        else {
            draw++;
        }

        while (printf("Novo grenal (1-sim 2-nao)\n") && scanf("%d", &grenal) && (grenal != 1)
               && (grenal != 2));

    } while (grenal == 1);

    printf("%d grenais\n", partida);
    printf("Inter:%d\n", vInt);
    printf("Gremio:%d\n", vGrm);
    printf("Empates:%d\n", draw);

    if (vInt > vGrm){
        printf("Inter venceu mais\n");
    }
    else if (vGrm > vInt) {
        printf("Gremio venceu mais\n");
    }
    else {
        printf("Não houve vencedor\n");
    }

    return 0;
}
