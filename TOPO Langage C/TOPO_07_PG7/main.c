#include <stdio.h>
#include <stdlib.h>

int main()
{
     int number;
    int i=1;
    printf("Entrez un nombre:\n");
    scanf("%d", &number);

    printf("Les diviseurs de %d sont:\n", number);

    while(i<=number){
        if(number%i==0){
            printf("%d", i);
        }i++;
    }
    printf("\n");
    return 0;
}
