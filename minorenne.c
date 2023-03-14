#include <stdio.h>

int main ()

{
    int eta;
    printf("quanti anni hai ?");
    scanf("%d", &eta);

    if (eta < 18)
    {
        printf("minorenne\n");
    }
    else
    {
        printf("maggiorenne\n");
    }
}
