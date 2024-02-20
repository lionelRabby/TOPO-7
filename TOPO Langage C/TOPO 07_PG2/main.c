#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,somme;
    for (i=0;i<=100;i++){
            somme+=i;
            if(i == 0)
                printf("%d", i);
            else
                printf("+%d",i);
    }
    printf("= %d\n",somme);
    return 0;
}
