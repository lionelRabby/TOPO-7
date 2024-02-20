#include <stdio.h>
#include <stdlib.h>


int estPremier(int number){
if(number<=1){
        return 0;
    }
    int diviseur =2;
    while(diviseur * diviseur <= number){
        if(number%diviseur == 0){
            return 0;
        }
    } diviseur++;
    return 1;
}




int main()
{
    int number = 1;

    printf("Les nombres premiers de 1 a 50 sont :\n ");
    while(number <= 50){
        if(estPremier(number)){
            printf("%d\n", number);
        }
            number++;
    }
    return 0;
}
