#include <stdio.h>

int main(){

    float I = 0, J = 1, valor = 0;
    int t1, t2;

    for(I = 0, J = 1, valor = 0, t1 = 0, t2 = 0; I < 2.2; J++){

        if(t2 == 0){
            printf("I=%.0f J=%.0f\n", I, J);
        }
        else {
            printf("I=%.1f J=%.1f\n", I, J);
        }

        t1++;

        if(t1 == 3){
            I += 0.2;

            valor += 0.2;

            J = valor;
            t1 = 0;
            t2++;
        }

        if (t2 == 5){
            t2 = 0;
        }
    }

    return 0;
}
