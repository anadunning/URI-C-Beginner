#include <stdio.h>
#include <string.h>

int main(){

    char names[10][31]; /*espaço para 10 strings de 31 caracteres cada*/
    int i;

    for(i = 0; i < 10; i++){

        gets(names[i]);
    }

    printf("%s\n", names[2]);
    printf("%s\n", names[6]);
    printf("%s\n", names[8]);

    return 0;
}
