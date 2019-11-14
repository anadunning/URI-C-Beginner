#include <stdio.h>

int main(){

    int num;
    int par[16];
    int impar[16];
    int i, j, p = 0, imp = 0;

    // Read 15 numbers
    for(i = 0; i < 15; i++){
        scanf("%d", &num);

        // Add even numbers in an array
        if (num % 2 == 0){
            par[p] = num;
            p++;

            // When the array reaches five elements, print it
            if (p == 5){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                    p = 0;  // Array is going to restart
                }
            }
        }
        // Add odd numbers in an array
        else {
            impar[imp] = num;
            imp++;

            // When the array reaches fives elements, print it
            if (imp == 5){
                for (j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                    imp = 0;    // Array is going to restart
                }
            }
        }
    }

    // Keep printing, but starting from the odd array
    for (j = 0; j < imp; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (j = 0; j < p; j++){
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
