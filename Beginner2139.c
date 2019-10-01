#include <stdio.h>

int main(){

    int d, m, md;

    while (scanf("%d %d", &m, &d) != EOF){

        if (m == 12 && d == 25) {
            printf("E natal!\n");
        }
        else if (m == 12 && d == 24){
            printf("E vespera de natal!\n");
        }
        else if (m == 12 && d > 25){
            printf("Ja passou!\n");
        }
        else if (m == 12){
            d = 25 - d;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 11){
            d = 25 - d;
            md = (12 - m) * 30;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 10){
            d = 25 - d;
            md = ((12 - m ) * 30) + 1;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 9){
            d = 25 - d;
            md = ((12 - m) * 30) + 1;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 8){
            d = 25 - d;
            md = ((12 - m) * 30) + 2;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 7){
            d = 25 - d;
            md = ((12 - m) * 30) + 3;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 6){
            d = 25 - d;
            md = ((12 - m) * 30) + 3;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 5){
            d = 25 - d;
            md = ((12 - m) * 30) + 4;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 4){
            d = 25 - d;
            md = ((12 - m) * 30) + 4;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 3){
            d = 25 - d;
            md = ((12 - m) * 30) + 5;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 2){
            d = 25 - d;
            md = ((12 - m) * 28) + 24;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
        else if (m == 1){
            d = 25 - d;
            md = ((12 - m) * 30) + 5;
            d = d + md;
            printf("Faltam %d dias para o natal!\n", d);
        }
    }

    return 0;
}
