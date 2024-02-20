#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibSeries[10];
    fibSeries[0] = 0;
    fibSeries[1] = 1;
    int i = 2;
    int n = 10;

    while(i < n) {
        fibSeries[i] = fibSeries[i - 1] + fibSeries[i - 2];
        i++;
    }
    printf("Les 10 premiers termes de la suite de Fibonacci sont : \n");
    for(int i = 0; i < n; i++) {
        printf("%d \n", fibSeries[i]);
    }
    return 0;
}
