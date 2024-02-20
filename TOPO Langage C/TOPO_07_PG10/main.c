#include <stdio.h>
#include <stdlib.h>

int estPalindrome(int number){
int numberInverse = 0;
int temp = number;

while(temp != 0){
    numberInverse = numberInverse * 10 + temp % 10;
    temp = temp / 10;
    }
    return(number == numberInverse);
}

int main()
{
    int number;
    printf("Les nombres palindromes entre 100 et 1000 sont :\n");
    for(number = 100; number <= 1000; number++){
        if(estPalindrome(number)){
            printf("%d\n",number);
        }
    }
    return 0;
}
