#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    printf("Entrez un nombre:\n");
    scanf("%d", &number);
    printf("La table de multiplication %d est: \n",number);
    for(i=0;i<=12;i++){
        printf("%d x %d =%d\n",number,i,number*i);
    }
    return 0;
}
