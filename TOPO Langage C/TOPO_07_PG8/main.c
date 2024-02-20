#include <stdio.h>
#include <stdlib.h>

int estPremier(int number){
    int i;
    if(number<=1){
        return 0;
    }
    for (i=2; i*i <= number;i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int i;

    for (i==999;i>=2;i--){
        if(estPremier(i)){
            printf("Le plus grand nombre premier inférieur à 1000 est : %d\n", i);
            break;
        }
    }
    return 0;
}
