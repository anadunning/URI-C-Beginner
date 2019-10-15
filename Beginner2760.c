#include <stdio.h>
#include <string.h>

int main(){

    char phrase1[101], phrase2[101], phrase3[101];


       // scanf("%s", phrase1);
       // scanf("%s", phrase2);
       // scanf("%s", phrase3);

      //  fgets(phrase1, 41, stdin);
      //  fgets(phrase2, 41, stdin);
      //  fgets(phrase3, 41, stdin);

    gets(phrase1);
    gets(phrase2);
    gets(phrase3);

    printf("%s", phrase1);
    printf("%s", phrase2);
    printf("%s", phrase3);
    printf("\n");
    printf("%s", phrase2);
    printf("%s", phrase3);
    printf("%s", phrase1);
    printf("\n");
    printf("%s", phrase3);
    printf("%s", phrase1);
    printf("%s", phrase2);
    printf("\n");
    printf("%.10s", phrase1);
    printf("%.10s", phrase2);
    printf("%.10s", phrase3);
    printf("\n");

    return 0;
}
