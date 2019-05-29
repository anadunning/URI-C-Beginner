#include <stdio.h>
#include <string.h>

int main(){

    char corpo[20], classe[20], alimento[20];

    scanf("%s", corpo);
    scanf("%s", classe);
    scanf("%s", alimento);

    // A value equal to zero when both strings are identical.
    // All the characters in both strings are the same.
    if (strcmp(corpo, "vertebrado") == 0){

        if (strcmp(classe, "ave") == 0){

            if (strcmp(alimento, "carnivoro") == 0){
                printf("aguia");
            }
            else {
                printf("pomba");
            }

        }
        else if (strcmp(classe, "mamifero") == 0){

            if (strcmp(alimento, "onivoro") == 0){
                printf("homem");
            }
            else {
                printf("vaca");
            }
        }
    }
    else if (strcmp(corpo, "invertebrado") == 0){

        if (strcmp(classe, "inseto") == 0){

            if (strcmp(alimento, "hematofago") == 0){
                printf("pulga");
            }
            else {
                printf("lagarta");
            }
        }
        else if (strcmp(classe, "anelideo") == 0){

            if (strcmp(alimento, "onivoro") == 0){
                printf("minhoca");
            }
            else {
                printf("sanguessuga");
            }
        }
    }

    printf("\n");

    return 0;
}
