#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int diviseur = 2;
    int estPremier = 1;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &number);

    while(diviseur <= sqrt(number)){
        if(number%diviseur == 0){
            estPremier=0;
            break;
        }
        diviseur++;
    }
    if(number <= 1){
        printf("%d n'est pas un nombre premier.\n",number);
    }else if(estPremier){
    printf("%d est un nombre premier.\n", number);
    }else {
    printf("%d n'est pas un nombre premier.\n",number);
    }
    return 0;
}
