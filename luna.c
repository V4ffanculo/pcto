#include <stdio.h>

int main ()

{
    int x;
    
    printf("quando é nato?");
    scanf("%d", &x);
    int y= x-1969;
    int z= 1969-x;
    if (x== 1969)
    {
        printf("é nato lo stesso anno dello sbarco sulla luna");
    }
    else if (x>1969)
    {
        printf("é nato %d anni dopo il 1969\n", y);
    }
    else
    {
        printf("é nato %d anni prima il 1969\n", z);
    }
}


