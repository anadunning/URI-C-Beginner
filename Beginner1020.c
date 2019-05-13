#include <stdio.h>

int main(){

    int ageDays, year, month, day;

    scanf("%d", &ageDays);

    year = ageDays / 365;

    ageDays = ageDays % 365;

    month = ageDays / 30;

    ageDays = ageDays % 30;

    day = ageDays;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)", day);

    printf("\n");

    return 0;
}
