#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char parrot[10];

    setbuf(stdin, NULL);

    while (scanf(" %[^\n]s", parrot) != EOF){
   //fgets(parrot, 10, stdin);

        if (strcmp(parrot, "esquerda") == 0){
            printf("ingles\n");
        }
        else if (strcmp(parrot, "direita") == 0){
            printf("frances\n");
        }
        else if (strcmp(parrot, "as duas") == 0){
            printf("caiu\n");
        }
        else if (strcmp(parrot, "nenhuma") == 0){
            printf("portugues\n");
        }
    }
    return 0;
}
