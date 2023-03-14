#include <stdio.h>

int main ()

{
    int x;
    int y;
    int z;

    printf("é il lato di un triangolo?");
    scanf("%d", &x);
    printf("é il lato di un triangolo?");
    scanf("%d", &y);
    printf("é il lato di un triangolo?");
    scanf("%d", &z);
    if ((x+y>z)&&(x+z>y)&&(y+z>x))
    {
        printf("sono lati di un triangolo\n");
        if (x==y && y==z)
        {
            printf("é equilatero\n");
        }
        else if (x!=y && y!=z)
        {
            printf("é scaleno\n");
        }
        else 
        {
            printf("é isoscele\n");
        }
    }

else 
{
    printf("non é un triangolo\n");
}       
}


