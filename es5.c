#include <stdio.h>
int main()
{
    int x;
    int y;

    printf("utente inserisci un numero ");
    scanf("%d", &x);
    
    int array[n];
    int ;
    int divisore = 2;
    while(i < n)
    {
        while (primo%divisore != 0 && divisore < primo)
            divisore++;
        if (divisore==primo)
        {
            array[i]= primo; 
            i++;      
        }
            divisore = 2;
        primo++;
    }
    i=0;
    while (i<n)
    {
        printf("%d\n", array[i]);
        i++;
    }
}
}