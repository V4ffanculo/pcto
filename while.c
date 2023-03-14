#include <stdio.h>

int main ()

{
    int x;
    int y;
    int z;
    printf("inserire tre numeri");
    scanf("%d %d %d", &x, &y, &z);
    if ((x-y)==(y-z))
    {
        printf("sono in progressione aritmetica\n");
    }
    else
    {
        printf("non sono in progressione aritmetica\n");
    }
}
