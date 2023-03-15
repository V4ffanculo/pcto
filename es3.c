#include <stdio.h>
int main()
{
int x;
int y=0;
int z=1;
    while (x>0)
    {
        printf("inserisci un numero\n");
        scanf("%d", &x);
        if (x<0)
        {
            printf("non si fa la media\n");
            break;
        }
        printf("%d\n",(x+y)/z);
         z++;
        y=x+y;
    }
    
}